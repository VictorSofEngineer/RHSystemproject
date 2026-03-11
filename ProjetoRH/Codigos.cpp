#include <iostream>
#include "RHSystem.h.h"

using namespace std;

void RHSystem::menu(){

    cout << "1.Atendente" << endl;
    cout << "2.Entregador" << endl;
    cout << "3.Gerente" << endl;
    cout << "4.Faxineiro" << endl;
    cout << "5.Cozinheiro" << endl;

}

void RHSystem::salarioCarteira(){

    float salarios[5] = {1620,1800,2500,1620,2000};
    string profissao[5] = {"Atendente","Entregador","Gerente","Faxineiro","Cozinheiro"};

    int codigo;

    cout << "Digite o código da profissão: ";

    cin >> codigo;

    if(codigo != 1 && codigo != 2 && codigo != 3 && codigo != 4 && codigo != 5){

            cout << "Código inexistente" << endl;

        }else{

    cout << "Cargo: " << profissao[codigo-1] << endl;
    cout << "Salário: R$" << salarios[codigo-1] << endl;

        }
}

void RHSystem::valorHora(){

    float salarios[5] = {1620,1800,2500,1620,2000};

    int codigo;

    cout << "Digite o código da profissão: ";

    cin >> codigo;

    if(codigo != 1 && codigo != 2 && codigo != 3 && codigo != 4 && codigo != 5){

            cout << "Código inexistente" << endl;

        }else{

    float valorhora = salarios[codigo-1] / 220;

    cout << "Valor da hora: R$" << valorhora << endl;
        }
}

void RHSystem::horaExtra(){

    float salarios[5] = {1620,1800,2500,1620,2000};

    int codigo;
    int horas;

    cout << "Digite o código da profissão: ";

    cin >> codigo;

        if(codigo != 1 && codigo != 2 && codigo != 3 && codigo != 4 && codigo != 5){

            cout << "Código inexistente" << endl;

        }else{

    cout << "Horas extras realizadas: ";

    cin >> horas;

    float valorhora = salarios[codigo-1] / 220;
    float valorhoraextra = valorhora * 1.5;

    float total = valorhoraextra * horas;

    cout << "Valor das horas extras: R$" << total << endl;
        }
}
float extra(int codigo){

float salarios[5] = {1620,2000,3500,1620,1900};

    int horas;

    float valorhora = salarios[codigo-1] / 220;

    cout << "Informe a quantidade de horas:\n "<< endl;
    cin >> horas;

    float valorhoraextra = valorhora * 1.5;

    return valorhoraextra * horas;
}

void RHSystem::salarioTotal(){

    int codigo;
    string resposta;

    cout << "Informe o código do cargo: " << endl;
    cin >> codigo;

        if(codigo !=1 && codigo !=2 && codigo !=3 && codigo !=4 && codigo !=5){
                cout << "Código indisponível" << endl;
        }else{

    cout <<" Há horas extras?\n" <<endl;
    cin >> resposta;

        RHSystem obj;
        float salarios[5] = {1620,1800,2500,1620,2000};
        float SalarioBruto = salarios[codigo -1];
        float x = SalarioBruto;
        float y;
        float z = 0;


      if(resposta == "sim" || resposta == "Sim" || resposta == "Yes" || resposta == "yes" || resposta == "SIM"){
            y = x + extra(codigo);
            z += y;

            cout << "O salário do colaborador acrescido das horas extras é: R$" << z << endl;

      } else if(resposta == "não" || resposta == "Não" || resposta == "nao" || resposta == "Nao" || resposta == "NÃO" || resposta == "No" || resposta == "no"){

            cout << "O salário do colaborador sem acrescimos é: R$" << SalarioBruto << endl;
        }
        else{
            cout << "Opção não reconhecida" << endl;
        }
    }
}
