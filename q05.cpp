#include <iostream>
#include <string>
using namespace std;

class footballplayer {
    string playername;
    string position;
    int goalcount;

public:
    footballplayer() {
        playername = "unknown player";
        position = "benchwarmer";
        goalcount = 0;
    }

    footballplayer(string name, string pos = "midfielder", int goals = 10) {
        playername = name;
        position = pos;
        goalcount = goals;
    }


    footballplayer(const footballplayer &p) {
        playername = p.playername;
        position = p.position;
        goalcount = p.goalcount;
    }

    void scoreGoal(int goals = 1) {
        goalcount += goals;
    }

    void displayProfile() {
        cout << "Player: " << playername << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalcount << endl;
    }
};

int main() {
    footballplayer player1;
    player1.displayProfile();

    footballplayer player2("lionel messi", "forward", 30);
    player2.displayProfile();

    footballplayer player3(player2);
    player3.scoreGoal(5);
    player3.displayProfile();

    footballplayer player4("cristiano ronaldo");
    player4.displayProfile();

    player4.scoreGoal(12);
    player4.displayProfile();

    return 0;
}
