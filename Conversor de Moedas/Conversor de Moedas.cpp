#include <iostream>
#include <string>
using namespace std;
float Valor;
int oper;
float res;

float DR(float Valor) {
    float R;
    R = Valor * 5.39f;
    return R;
}
float DE(float Valor) {
    float R;
    R = Valor / 1.16f;
    return R;
}
float RD(float Valor) {
    float R;
    R = Valor / 5.39f;
    return R;
}
float RE(float Valor) {
    float R;
    R = Valor / 5.39f;
    return R;
}
float ER(float Valor) {
    float R;
    R = Valor * 5.39f;
    return R;
}
float ED(float Valor) {
    float R;
    R = Valor * 1.16f;
    return R;
}

int main()
{
    while (true) {
        float B;
        system("cls");
        cout << "\t\tConversao de moedas!!\n";
        cout << "Selecione a operacao!\n" << "1 - Dolar para Real\n" << "2 - Dolar para Euro\n" << "3 - Real para Dolar\n" << "4 - Real para Euro\n" << "5 - Euro para Real\n" << "6 - Euro para Dolar\n";
        cin >> oper;
        switch (oper) {
        case 1:
            system("cls");
            cout << "Insira valor em Dolares!\n";
            cin >> B;
            res = DR(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " BRL\n";
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Insira valor em Dolares!\n";
            cin >> B;
            res = DE(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " EUR\n";
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Insira valor em Reais!\n";
            cin >> B;
            res = RD(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " USD\n";
            system("pause");
            break;
        case 4:
            system("cls");
            cout << "Insira valor em Reais!\n";
            cin >> B;
            res = RE(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " EUR\n";
            system("pause");
            break;
        case 5:
            system("cls");
            cout << "Insira valor em Euros!\n";
            cin >> B;
            res = ER(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " BRL\n";
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "Insira valor em Euros!\n";
            cin >> B;
            res = ED(B);
            system("cls");
            cout << "Resultado da Operacao: " << res << " USD\n";
            system("pause");
            break;
        }
    }
}
