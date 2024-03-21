#include <iostream>
using namespace std;

int main() {
    string nomeFuncionario;
    double salarioBruto, descontoPrevidencia, descontoIR, salarioLiquido;

    cout << "Digite o nome do funcionário: ";
    cin >> nomeFuncionario;

    cout << "Digite o salário bruto do funcionário: R$ ";
    cin >> salarioBruto;

    descontoPrevidencia = 0.10 * salarioBruto;
    descontoIR = 0.25 * (salarioBruto - descontoPrevidencia);
    salarioLiquido = salarioBruto - descontoPrevidencia - descontoIR;

    cout << "Nome do funcionário: " << nomeFuncionario << endl;
    cout << "Salário bruto: R$ " << salarioBruto << endl;
    cout << "Desconto Previdência: R$ " << descontoPrevidencia << endl;
    cout << "Desconto Imposto de Renda: R$ " << descontoIR << endl;
    cout << "Salário líquido: R$ " << salarioLiquido << endl;

    return 0;
}