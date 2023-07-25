#ifndef FUNC_H
#define FUNC_H

#include <string>
using std::string;

/** @brief declaração da classe Funcionario*/
class Funcionario
{
/** @brief atributos da classe Funcionario*/
private:
    string funcional;
    string nome;
    string departamento;
    double salario;
/** @brief métodos da classe Funcionario*/
public:
    Funcionario();
    Funcionario(string funcional, string nome, string departamento, double salario);
    string GetNome();
    string GetDep();
    string GetFunc();
    double GetSalario();
    ~Funcionario();
};

#endif
