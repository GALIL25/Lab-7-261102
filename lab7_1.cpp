#include <iostream>
using namespace std;

int main() {
    int a  = 20; 
    int b = 30;
    int c = 4;
    double output = 0;

    output = a - ( (double)b / c );
    cout << "output: " << output << "\n";
    return 0;
}