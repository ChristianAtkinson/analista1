#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Introduzca un numero: ";
    cin >> num;
    for (int i = 1; i <= num; i += 2) {
        cout << i << endl;
    }
    return 0;
}