#include <iostream>
#include <string>

using namespace std;

class cricketplayer
{
private:
    string name;
    int jerseynumber;
    double battingaverage;
    int matches;

public:
    cricketplayer(string name, int jerseynumber, double battingaverage)
    {
        this->name = name;
        this->jerseynumber = jerseynumber;
        this->battingaverage = battingaverage;
        this->matches = 1;
    }

    cricketplayer& improveaverage(double runs)
    {
        battingaverage += runs / 100.0;
        return *this;
    }

    void playmatch(double runsscored)
    {
        battingaverage = ((battingaverage * matches) + runsscored) / (matches + 1);
        matches++;
    }

    void displayplayerstats()
    {
        cout << "name: " << name << endl;
        cout << "jersey number: " << jerseynumber << endl;
        cout << "batting average: " << battingaverage << endl;
        cout << "commentary: this batting average is more consistent than karachi's weather!" << endl;
    }
};
int main()
{
    cricketplayer p1("babar azam", 56, 48.5);
    cricketplayer p2("muhammad rizwan", 16, 45.2);
    cricketplayer p3("saim ayub", 63, 32.4);

    p1.playmatch(120);
    p1.improveaverage(50).improveaverage(30);

    p2.playmatch(98);
    p2.improveaverage(40);

    p3.playmatch(0);
    p3.improveaverage(80).improveaverage(60);

    p1.displayplayerstats();
    p2.displayplayerstats();
    p3.displayplayerstats();
}
