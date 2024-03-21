#include <iostream>
using namespace std;

int main() {
    int diaNascimento, mesNascimento, anoNascimento;
    int diaAtual, mesAtual, anoAtual;
    int diasVividos;

    cout << "Digite a data de nascimento (DD MM AAAA): ";
    cin >> diaNascimento >> mesNascimento >> anoNascimento;

    cout << "Digite a data atual (DD MM AAAA): ";
    cin >> diaAtual >> mesAtual >> anoAtual;

    // Calculando dias vividos
    diasVividos = (anoAtual - anoNascimento) * 360; // 360 dias em um ano

    diasVividos += (mesAtual - mesNascimento) * 30; // 30 dias em um mês

    diasVividos += diaAtual - diaNascimento; // Dias já passados no mês atual

    cout << "Voce viveu um total de " << diasVividos << " dias." << endl;

    return 0;
}