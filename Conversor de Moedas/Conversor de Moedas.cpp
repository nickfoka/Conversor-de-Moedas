#include <iostream>
#include <string>

using namespace std;

// Taxas:
const float USD_BRL = 5.39f;
const float USD_EUR = 0.86f;
const float BRL_USD = 0.19f;
const float BRL_EUR = 0.16f;
const float EUR_BRL = 6.27f;
const float EUR_USD = 1.16f;

// Função de conversão:
float conversao(float valor, float taxa) {
    return valor * taxa;
}

int main()
{
    int oper;
    float valor, res;
    while (true) {
// Seleção de execução:
        system("cls");
        cout << "Conversao de moedas!!\n\n";
        cout << "Selecione a operacao!\n\n";
        cout << "1 - Dolar para Real\n";
        cout << "2 - Dolar para Euro\n";
        cout << "3 - Real para Dolar\n";
        cout << "4 - Real para Euro\n";
        cout << "5 - Euro para Real\n";
        cout << "6 - Euro para Dolar\n\n";
        cout << "0 - Sair\n";
        cin >> oper;

// Execução da operação:
        switch (oper) {
        case 1:
            system("cls");
            cout << "Insira valor em Dolares!\n";
            cin >> valor;
            res = conversao(valor, USD_BRL);
            system("cls");
            cout << "Resultado da Operacao: " << res << " BRL\n";
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Insira valor em Dolares!\n";
            cin >> valor;
            res = conversao(valor, USD_EUR);
            system("cls");
            cout << "Resultado da Operacao: " << res << " EUR\n";
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Insira valor em Reais!\n";
            cin >> valor;
            res = conversao(valor, BRL_USD);
            system("cls");
            cout << "Resultado da Operacao: " << res << " USD\n";
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "Insira valor em Reais!\n";
            cin >> valor;
            res = conversao(valor, BRL_EUR);
            system("cls");
            cout << "Resultado da Operacao: " << res << " EUR\n";
            system("pause");
            break;
        case 5:
            system("cls");
            cout << "Insira valor em Euros!\n";
            cin >> valor;
            res = conversao(valor, EUR_BRL);
            system("cls");
            cout << "Resultado da Operacao: " << res << " BRL\n";
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "Insira valor em Euros!\n";
            cin >> valor;
            res = conversao(valor, EUR_USD);
            system("cls");
            cout << "Resultado da Operacao: " << res << " USD\n";
            system("pause");
            break;
        }
// Quebrar loop ao inserir 0:
        if (oper == 0) exit(0);
    }
    return 1;
}
