#include <iostream>
using namespace std;

int main() {
    string nomeVendedor;
    int qtdCarrosVendidos;
    double valorVendas, salarioTotal;

    cout << "Digite o nome do vendedor: ";
    cin >> nomeVendedor;

    cout << "Quantidade de carros vendidos: ";
    cin >> qtdCarrosVendidos;

    cout << "Valor total das vendas: R$ ";
    cin >> valorVendas;

    salarioTotal = 350.00 + (50.00 * qtdCarrosVendidos) + (0.05 * valorVendas);

    cout << "Nome do vendedor: " << nomeVendedor << endl;
    cout << "Salário total do vendedor: R$ " << salarioTotal << endl;

    return 0;
}