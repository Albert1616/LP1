#include <iostream>
#include "header/funcionario.h"
#include "header/ordenacao.h"
#include "header/cadastraFuncionarios.h"

int main(){
    int n = 1;
    Funcionario* f = new Funcionario[n];
    int numeroFuncionarios = 0;
    cadastraFuncionarios(f,n,numeroFuncionarios);
    while(numeroFuncionarios == 0){
        char op = ' ';
        std::cout << "Voce nao cadastrou nenhum funcionario, gostaria de tentar denovo?(s/n)" << std::endl;
        std::cin >> op;
        if(op == 's'){cadastraFuncionarios(f,n,numeroFuncionarios);}
        else{return -1;}
    }
    f[0].aumentarSalario(25);
    std::cout << "salario de " << f[0].getNome() << " incremetado em 25%, novo salario: " 
    << f[0].getSalario() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Maiores salarios: " << std::endl; 
    maiorSalario(f,n);
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Menores salarios: " << std::endl;
    menorSalario(f,n);
    std::cout << "-------------------------------------------------------------" << std::endl;
    if(n > 2){
        f[2]++;
        std::cout << "salario de " << f[2].getNome() << " incremetado em 10%, novo salario: " 
        << f[2].getSalario() << std::endl;
    }
    std::cout << f[2];
    return 0;
}