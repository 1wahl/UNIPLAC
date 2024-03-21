#include <iostream>
using namespace std;

int main() {
    double cotacaoDolar, valorDolar, valorReal;

    cout << "Digite a cotação do dólar: ";
    cin >> cotacaoDolar;

    cout << "Digite o valor em dólar: ";
    cin >> valorDolar;

    valorReal = valorDolar * cotacaoDolar;

    cout << "O valor em reais é: R$ " << valorReal << endl;

    return 0;
}