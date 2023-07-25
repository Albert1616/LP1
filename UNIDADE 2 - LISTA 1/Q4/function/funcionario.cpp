#include "../header/funcionario.h"
#include <string>

using std::string;
/** @brief construtor padrão da classe Funcionario*/
Funcionario::Funcionario(){
    this->funcional = "";
    this->nome = "";
    this->departamento = "";
    this->salario = 0.0;
}
/** @brief construtor da classe Funcionário*/
Funcionario::Funcionario(string funcional, string nome,string departamento, double salario){
    this->funcional = funcional;
    this->nome = nome;
    this->departamento = departamento;
    this->salario = salario;
}
/** @brief destrutor da classe Funcionário*/
Funcionario::~Funcionario(){}
/** @brief método que retorna o conteudo de nome*/
string Funcionario::GetNome(){
    return this->nome;
}
/** @brief método que retorna o conteudo de departamento*/
string Funcionario::GetDep(){
    return this->departamento;
};
/** @brief método que retorna o conteudo de funcional*/
string Funcionario::GetFunc(){
    return this->funcional;
};
/** @brief método que retorna o conteudo de salário*/
double Funcionario::GetSalario(){
    return this->salario;
}