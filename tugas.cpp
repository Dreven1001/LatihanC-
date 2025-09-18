#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int x, ai;
    int playerscore = 0;
    int aiscore = 0;

    cout << "=== spock lizard game ===" << endl;

    ai = rand() % 5 + 1;
    cout << "- round 1 -" << endl;
    cout << "player point: " << playerscore << endl;
    cout << "ai point: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x > ai) {
        cout << "player win!\n\n";
        playerscore++;
    } else if (x < ai) {
        cout << "ai win!\n\n";
        aiscore++;
    } else {
        cout << "it's draw!\n\n";
    }

    ai = rand() % 5 + 1;
    cout << "- round 2 -" << endl;
    cout << "player point: " << playerscore << endl;
    cout << "ai point: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x > ai) {
        cout << "player win!\n\n";
        playerscore++;
    } else if (x < ai) {
        cout << "ai win!\n\n";
        aiscore++;
    } else {
        cout << "it's draw!\n\n";
    }

    ai = rand() % 5 + 1;
    cout << "- round 3 -" << endl;
    cout << "player point: " << playerscore << endl;
    cout << "ai point: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x > ai) {
        cout << "player win!\n\n";
        playerscore++;
    } else if (x < ai) {
        cout << "ai win!\n\n";
        aiscore++;
    } else {
        cout << "it's draw!\n\n";
    }

    cout << "=== final result ===" << endl;
    cout << "player score: " << playerscore << endl;
    cout << "ai score: " << aiscore << endl;

    if (playerscore > aiscore) {
        cout << ">> player menang! <<\n";
    } else if (aiscore > playerscore) {
        cout << ">> ai menang! <<\n";
    } else {
        cout << ">> seri! <<\n";
    }

    return 0;
}
