#include <iostream>
#include <fstream>
#include "function.cpp"

using namespace std;

int main(){
    Empregado* c = new Chefe(1500.15);
    Empregado* cm = new Comissario(1500.5, 15, 3);//nos dois construtores, foi ultilizado polimorfismo de subtipos.

    Empregado* Departamento[5];//como está sendo ultilizada alocação estática, o vetor está alocado no segmento stack
    Departamento[0] = new Chefe(1544.2);
    Departamento[1] = new Chefe(1475.20);
    Departamento[2] = new Comissario(1475.8, 20, 3);
    Departamento[3] = new Comissario(247.7, 500, 2);
    Departamento[4] = new Comissario(1452.5, 144, 2);

    cout << "Vetor antes da ordenação: " << endl;
    for(int i = 0; i<5;i++){
        cout << Departamento[i]->CalculaSalario() << " ";
    };
    cout << endl;
    ordenaPorSalario(Departamento, 5);
    cout << "Vetor depois da ordenação:  " << endl;
    for(int i = 0; i<5;i++){
        cout << Departamento[i]->CalculaSalario() << " ";
    };
    return 0;
}