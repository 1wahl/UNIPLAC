#include <iostream>
using namespace std;

int main() {
    double cotacaoDolar, valorDolar, valorReal;

    cout << "Digite a cota��o do d�lar: ";
    cin >> cotacaoDolar;

    cout << "Digite o valor em d�lar: ";
    cin >> valorDolar;

    valorReal = valorDolar * cotacaoDolar;

    cout << "O valor em reais �: R$ " << valorReal << endl;

    return 0;
}