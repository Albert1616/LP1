#include <iostream>
#include <string>
#include "../header/funcionario.h"

using std::string;

Funcionario::Funcionario(){
    nome = " ";
    salario: 0.00;
}
Funcionario::Funcionario(string n, double s){
    nome = n;
    salario = s;
}
string Funcionario::getNome(){
    return nome;
}
double Funcionario::getSalario(){
    return salario;
}
void Funcionario::aumentarSalario(int percAumento){
    double percent = percAumento/100.0;
    salario = salario * (1+percent);
}
Funcionario& Funcionario::operator++(int){
    this->salario = this->salario + (this->salario*0.1);
    return *this; 
}
std::ostream& operator<< (std::ostream &o, Funcionario &f){
    o << f.getNome() << " " << f.getSalario() << std::endl;
    return o;
}