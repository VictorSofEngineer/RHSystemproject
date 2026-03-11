#include <iostream>
#include <locale>
#include "RHSystem.h.h"

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    RHSystem sistema;

    int opcao = 0;

    while(opcao != 5){

        system("cls");

        cout << "----------------------" << endl;
        cout << "----- SISTEMA RH -----" << endl;
        cout << "----------------------" << endl;

        cout << "1.Ver salário" << endl;
        cout << "2.Ver valor da hora" << endl;
        cout << "3.Calcular hora extra" << endl;
        cout << "4.Salário total" << endl;
        cout << "5.Sair" << endl;
        cout << "----------------------" << endl;
        cin >> opcao;
        cout << "----------------------" << endl;

        if(opcao == 1){
            sistema.menu();
            cout << "----------------------" << endl;
            sistema.salarioCarteira();
            cout << "----------------------" << endl;
        }

        else if(opcao == 2){
            sistema.menu();
            cout << "----------------------" << endl;
            sistema.valorHora();
            cout << "----------------------" << endl;
        }

        else if(opcao == 3){
            sistema.menu();
            cout << "----------------------" << endl;
            sistema.horaExtra();
            cout << "----------------------" << endl;
        }

        else if(opcao == 4){
            sistema.menu();
            cout << "----------------------" << endl;
            sistema.salarioTotal();
            cout << "----------------------" << endl;
        }
        else if(opcao == 5){

        cout << "Pressione novamente para sair" << endl;
        }
        else {

        cout << "Opção indisponível" << endl;
        }
            system("pause");
    }

}

