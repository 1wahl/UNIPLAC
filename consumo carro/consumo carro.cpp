#include <iostream>
using namespace std;

int main() {
    string marca;
    double kmInicial, kmFinal, litrosConsumidos, consumo;

    cout << "Digite a marca do automovel: ";
    cin >> marca;

    cout << "Digite a quilometragem inicial: ";
    cin >> kmInicial;

    cout << "Digite a quilometragem final: ";
    cin >> kmFinal;

    cout << "Digite a quantidade de litros consumidos: ";
    cin >> litrosConsumidos;

    consumo = (kmFinal - kmInicial) / litrosConsumidos;

    cout << "Marca do automóvel: " << marca << endl;
    cout << "Consumo: " << consumo << " Km/litro" << endl;

    return 0;
}