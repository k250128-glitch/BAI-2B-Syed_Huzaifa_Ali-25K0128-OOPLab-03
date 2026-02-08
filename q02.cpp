#include <iostream>

using namespace std;

class Weekdays{

    string days[7];
    int Current_day;

    public:
        Weekdays() : days{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}{
            Current_day = 0;
            cout << "Week Days: \n";
            for(int i=0; i<7; i++){
                cout << i+1 << ". " << days[i] << endl; 
            }
        }

        Weekdays(int i) : days{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}{
            Current_day = (i % 7 + 7) % 7;
        }

        string Get_CurrentDay(){
            return days[Current_day];
        }
        string Get_NextDay(){
            return days[(Current_day + 1) % 7];
        }
        string Get_PreviousDay(){
            return days[(Current_day + 6) % 7];
        }
        string Get_nthDay(int n){
            int targetIndex = (Current_day + n) % 7;
            if(targetIndex < 0) targetIndex += 7;
            return days[targetIndex];
        }

};

int main(){

    Weekdays w1;

    cout << "Current day: " << w1.Get_CurrentDay() << endl;
    cout << "Next Day: " << w1.Get_NextDay() << endl;
    cout << "Previous Day: " << w1.Get_PreviousDay() << endl;
    cout << "Nth day from today is: " << w1.Get_nthDay(10) << endl;

    return 0;
}
