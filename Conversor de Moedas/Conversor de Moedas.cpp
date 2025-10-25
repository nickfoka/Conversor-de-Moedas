#include <iostream>
#include <string>
using namespace std;
float Valor;
float Dolar = 5.39;
int oper;
float res;

float DR(float Valor) {
    float R;
    R = Valor * Dolar;
    return R;
}
float RD(float Valor) {
    float R;
    R = Valor / Dolar;
    return R;
}

int main()
{
    while (true) {
        float B;
        system("cls");
        cout << "\t\tConversao de moedas!!\n";
        cout << "Selecione a operacao!\n" << "1 - Dolar para Real\n" << "2 - Real para Dolar\n";
        cin >> oper;
        switch (oper) {
        case 1:
            system("cls");
            cout << "Insira valor em Dolares!\n";
            cin >> B;
            res = DR(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " USD\n";
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Insira valor em Reais!\n";
            cin >> B;
            res = RD(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " BRL\n";
            system("pause");
            break;
        }
    }
}
