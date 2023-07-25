#include <iostream>
#include "../header/ordenacao.h"
#include "../header/funcionario.h"

void swap(Funcionario* f, int i, int j){
    Funcionario aux = f[i];
    f[i] = f[j];
    f[j] = aux;
}

void maiorSalario(Funcionario* f, int tamanho){
    for(int i = 0; i<tamanho;i++){
        int maior = i;
        for(int j = i+1; j<tamanho;j++){
            if(f[j].getSalario() > f[maior].getSalario()){
                maior = j;
            }
        }
        if(i != maior){
            swap(f,i,maior);
        }
    }
    switch (tamanho)
    {
    case 1:
        std::cout << f[0].getNome() << " " << f[0].getSalario() << std::endl;
        break;
    case 2:
        for(int j = 0; j<tamanho;j++){
            std::cout << f[j].getNome() << " " << f[j].getSalario() << std::endl;
        }
        break;
    default:
        for(int j = 0; j<3;j++){
            std::cout << f[j].getNome() << " " << f[j].getSalario() << std::endl;
        }
        break;
    }
}

void menorSalario(Funcionario* f, int tamanho){
    for(int i = 0; i<tamanho;i++){
        int menor = i;
        for(int j = i+1; j<tamanho;j++){
            if(f[j].getSalario() < f[menor].getSalario()){
                menor = j;
            }
        }
        if(i != menor){
            swap(f,i,menor);
        }
    }
    switch (tamanho)
    {
    case 1:
        std::cout << f[0].getNome() << " " << f[0].getSalario() << std::endl;
        break;
    case 2:
        for(int j = 0; j<tamanho;j++){
            std::cout << f[j].getNome() << " " << f[j].getSalario() << std::endl;
        }
        break;
    default:
        for(int j = 0; j<3;j++){
            std::cout << f[j].getNome() << " " << f[j].getSalario() << std::endl;
        }
        break;
    }
}
