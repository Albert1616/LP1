#include "../header/cadastraFuncionarios.h"
#include "../header/funcionario.h"

void cadastraFuncionarios(Funcionario* &f, int &capacidade, int &numeroFuncionarios)
{
    while(true){
        string nome;
        double salario;
        std::cout << "Digite o nome do novo funcionario (-1 para terminar a inclusao)" << std::endl;
        std::cin >> nome;
        if(nome == "-1"){break;}
        std::cout << "Digite o salário do novo funcionario (-1 para terminar a inclusao)" << std::endl;
        std::cin >> salario;
        if(salario == -1){break;}
        if(numeroFuncionarios == capacidade){
            capacidade++;
            Funcionario* x = new Funcionario[capacidade];
            for(int i = 0; i<numeroFuncionarios;i++){
                x[i] = f[i];
            }
            x[numeroFuncionarios] = Funcionario(nome,salario);
            delete[] f;
            f = x;
            numeroFuncionarios++;
        }else{
            f[numeroFuncionarios] = Funcionario(nome,salario);
            numeroFuncionarios++;
        }
    }
}