#include <iostream>
using namespace std;

int main() {
    string nomeFuncionario;
    double salarioBruto, descontoPrevidencia, descontoIR, salarioLiquido;

    cout << "Digite o nome do funcion�rio: ";
    cin >> nomeFuncionario;

    cout << "Digite o sal�rio bruto do funcion�rio: R$ ";
    cin >> salarioBruto;

    descontoPrevidencia = 0.10 * salarioBruto;
    descontoIR = 0.25 * (salarioBruto - descontoPrevidencia);
    salarioLiquido = salarioBruto - descontoPrevidencia - descontoIR;

    cout << "Nome do funcion�rio: " << nomeFuncionario << endl;
    cout << "Sal�rio bruto: R$ " << salarioBruto << endl;
    cout << "Desconto Previd�ncia: R$ " << descontoPrevidencia << endl;
    cout << "Desconto Imposto de Renda: R$ " << descontoIR << endl;
    cout << "Sal�rio l�quido: R$ " << salarioLiquido << endl;

    return 0;
}