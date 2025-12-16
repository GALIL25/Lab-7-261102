#include <iostream>
using namespace std;

char before(char x) {
    if (x < 'A' || x > 'Z') {
        return '0';
    }
    if (x == 'A') {
        return 'Z';
    }
    return x - 1;
}

int main() {
    cout << before('A') << "\n"; // Z
    cout << before('B') << "\n"; // A
    cout << before('P') << "\n"; // O
    cout << before('T') << "\n"; // S
    cout << before('Z') << "\n"; // Y
    cout << before('a') << "\n"; // 0
    cout << before('0') << "\n"; // 0
    cout << before('c') << "\n"; // 0

    return 0;
}