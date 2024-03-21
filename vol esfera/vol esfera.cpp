#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio, volume;
    const double PI = 3.14;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    volume = (4.0 * PI * pow(raio, 3)) / 3.0;

    cout << "Volume da esfera: " << volume << endl;

    return 0;
}