#include <iostream>
using namespace std;

int modularPower(int base, int exp, int modulus) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = (result * base) % modulus;
    }
    return result;
}

int main() {
    int base = 17;
    int exp = 77;
    int modulus = 35;
    int remainder = modularPower(base, exp, modulus);
    
    cout << base << "^" << exp << " % "
        << modulus << " = " << remainder << endl;
    
    return 0;
}