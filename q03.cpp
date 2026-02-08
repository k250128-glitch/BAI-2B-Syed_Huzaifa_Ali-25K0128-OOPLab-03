
#include <iostream>
#include <string>

using namespace std;

class SmartDevice {
private:
    string name;
    string type;
    bool isOn;

public:
    SmartDevice(string n, string t, bool status) : name(n), type(t), isOn(status) {
        cout << "[System Boot] " << name << " the " << type << " is now online." << endl;
        cout << "Status: " << (isOn ? "Active and ready to serve." : "Hibernating.") << endl << endl;
    }

    ~SmartDevice() {
        cout << "[Power Down] " << name << " (" << type << ") is fading away..." << endl;
        cout << "Final Words: \"Tell my charging dock... I never... regretted... the dust...\"" << endl;
        cout << "[Connection Lost]" << endl;
    }

    void toggleSwitch() {
        isOn = !isOn;
        cout << ">> " << name << " is now " << (isOn ? "ON" : "OFF") << "." << endl;
    }
};

int main() {
   
    {   
        cout << "--- Initializing Kitchen Protocol ---" << endl;
        SmartDevice gadget1("Brew-Master 67", "Coffee cofee", true);
        gadget1.toggleSwitch();
        cout << "Leaving the kitchen..." << endl;
    } 
    
    cout << "\nMoving to the Living Room..." << endl;

    SmartDevice gadget2("Dust-Buster Prime", "Robo-Vacuum", false);
    cout << "\nEnd of program reached. System shutdown initiated." << endl;
    
    return 0;
}
