#include <iostream>
using namespace std;

int main() {
    int qtdTipo1, qtdTipo2, qtdTipo3;
    double totalTipo1, totalTipo2, totalTipo3;

    cout << "Quantidade vendida do picol� tipo 1: ";
    cin >> qtdTipo1;

    cout << "Quantidade vendida do picol� tipo 2: ";
    cin >> qtdTipo2;

    cout << "Quantidade vendida do picol� tipo 3: ";
    cin >> qtdTipo3;

    totalTipo1 = qtdTipo1 * 0.50;
    totalTipo2 = qtdTipo2 * 0.60;
    totalTipo3 = qtdTipo3 * 0.75;

    cout << "Total arrecadado com o picol� tipo 1: R$ " << totalTipo1 << endl;
    cout << "Total arrecadado com o picol� tipo 2: R$ " << totalTipo2 << endl;
    cout << "Total arrecadado com o picol� tipo 3: R$ " << totalTipo3 << endl;

    return 0;
}