#include <iostream>

using namespace std;

int main() {

    long long int Zahl1;
    long long int Quersumme;

    cout << "Zahl zur Quersummenberechnunng eingeben" << endl;

    cin >> Zahl1;

    while(Zahl1 > 0) {
        Quersumme += Zahl1 % 10;
        Zahl1 /= 10;
    }

    cout << Quersumme << endl;

    return 0;
}
