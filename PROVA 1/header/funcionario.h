#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <string>

using std::string;

class Funcionario{
    private:
        string nome;
        double salario;
    public:
        Funcionario();
        Funcionario(string n, double s);
        string getNome();
        double getSalario();
        void aumentarSalario(int percAumento);
        Funcionario& operator++(int);
        friend std::ostream& operator << (std::ostream &o, Funcionario &f);
};

#endif