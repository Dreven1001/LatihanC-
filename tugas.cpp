// Tugas C++ Agung
// Program gunting batu crt

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
    cout << "player score: " << playerscore << endl;
    cout << "ai score: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x == ai) {
        cout << "it's draw!\n\n";
    } else if ((x == 1 && (ai == 2 || ai == 3)) ||
               (x == 2 && (ai == 3 || ai == 4)) ||
               (x == 3 && (ai == 4 || ai == 5)) ||
               (x == 4 && (ai == 5 || ai == 1)) ||
               (x == 5 && (ai == 1 || ai == 2))) {
        cout << "player win!\n\n";
        playerscore++;
    } else {
        cout << "ai win!\n\n";
        aiscore++;
    }

    ai = rand() % 5 + 1;
    cout << "- round 2 -" << endl;
    cout << "player score: " << playerscore << endl;
    cout << "ai score: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x == ai) {
        cout << "it's draw!\n\n";
    } else if ((x == 1 && (ai == 2 || ai == 3)) ||
               (x == 2 && (ai == 3 || ai == 4)) ||
               (x == 3 && (ai == 4 || ai == 5)) ||
               (x == 4 && (ai == 5 || ai == 1)) ||
               (x == 5 && (ai == 1 || ai == 2))) {
        cout << "player win!\n\n";
        playerscore++;
    } else {
        cout << "ai win!\n\n";
        aiscore++;
    }

    ai = rand() % 5 + 1;
    cout << "- round 3 -" << endl;
    cout << "player score: " << playerscore << endl;
    cout << "ai score: " << aiscore << endl;
    cout << "1. rock\n2. scissors\n3. lizard\n4. paper\n5. spock";
    cout << "\nplayer chooses: ";
    cin >> x;
    cout << "ai chooses: " << ai << endl;
    if (x == ai) {
        cout << "it's draw!\n\n";
    } else if ((x == 1 && (ai == 2 || ai == 3)) ||
               (x == 2 && (ai == 3 || ai == 4)) ||
               (x == 3 && (ai == 4 || ai == 5)) ||
               (x == 4 && (ai == 5 || ai == 1)) ||
               (x == 5 && (ai == 1 || ai == 2))) {
        cout << "player win!\n\n";
        playerscore++;
    } else {
        cout << "ai win!\n\n";
        aiscore++;
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
