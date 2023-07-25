#include <iostream>
#include <stdlib.h>
#include "../header_class/turma.h"
#include "../header_class/aluno.h"

/**
 @brief Função auxiliar que troca a posição de dois elementos no vetor de alunos
 @param alunos Vetor de alunos
 @param p1 Índice do primeiro elemento
 @param p2 Índice do segundo elemento
*/
void swap(Aluno* alunos, int p1, int p2)
{
    Aluno aux = alunos[p1];
    alunos[p1] = alunos[p2];
    alunos[p2] = aux;
}

/**
 @brief Retorna a capacidade da turma
 @return Capacidade da turma
*/
int Turma::GetCapacidade()
{
    return capacidade;
}

/**
 @brief Define a capacidade da turma
 @param c Capacidade da turma
*/
void Turma::SetCapacidade(int c)
{
    capacidade = c;
};

/**
 @brief Retorna o número de vagas disponíveis na turma
 @return Número de vagas disponíveis na turma
*/
int Turma::GetVagas()
{
    return vagas;
};

/**
 @brief Define o número de vagas disponíveis na turma
 @param v Número de vagas disponíveis na turma
*/
void Turma::SetVagas(int v)
{
    vagas = v;
};

/**
 @brief Retorna o vetor de alunos da turma
 @return Vetor de alunos da turma
*/
Aluno* Turma::getAluno(){
return alunos;
}

/**
 @brief Define o vetor de alunos da turma
 @param alunos Vetor de alunos da turma
*/
void Turma::setAlunos(Aluno *alunos)
{
    this->alunos = alunos;
}

/**
 @brief Imprime na tela os dados dos alunos matriculados na turma
*/
void Turma::imprimeAlunos()
{
    for (int i = 0; i < vagas; i++)
    {
        std::cout << alunos[i].GetNome() << ' '
                  << alunos[i].GetMatricula() << ' '
                  << alunos[i].media() << std::endl;
    }
}

/**
 @brief Construtor da classe Turma
 @param c Capacidade da turma
*/
Turma::Turma(int c)
{
    capacidade = c;
    alunos = new Aluno[c];
};

/**
 @brief Ordena o vetor de alunos de acordo com o filtro informado
 @param filtro Filtro a ser utilizado para a ordenação (nome, nota ou matricula)
*/
void Turma::ordenaCampos(string filtro)
{
    /** @brief percorre o vetor de alunos*/
    for (int i = 0; i < vagas; i++)
    {
        /** @brief variável para armazenar o valor do índice do menor objeto*/
        int menor_indice = i;
        /** @brief percorre novamente o vetor, fazendo comparações sucessivas entre
         suas posições
        */
        for (int j = i + 1; j < vagas; j++)
        {
            /** @brief verifica se o filtro escolhido é nome*/
            if (filtro == "nome")
            {
                /** @brief compara os nomes de dois objetos do vetor alunos*/
                if (alunos[j].GetNome() < alunos[menor_indice].GetNome())
                {
                    /** @brief caso verdadeiro o índice do objeto
                    que possui o menor nome passa a ser j*/
                    menor_indice = j;
                }
            }
            /** @brief verifica se o filtro escolhido é nota*/
            else if (filtro == "nota")
            {
                /** @brief compara as médias de dois objetos do vetor alunos*/
                if (alunos[j].media() < alunos[menor_indice].media())
                {
                    /** @brief caso verdadeiro o índice do objeto
                    que possui a menor média passa a ser j*/
                    menor_indice = j;
                }
            }
            /** @brief verifica se o filtro escolhido é matricula*/
            else if (filtro == "matricula")
            {
                /** @brief compara as matriculas de dois objetos do vetor alunos*/
                if (alunos[j].GetMatricula() < alunos[menor_indice].GetMatricula())
                {
                    /** @brief caso verdadeiro o índice do objeto 
                    que possui a menor matricula passa a ser j*/
                    menor_indice = j;
                }
            }
        }
        /** @brief verifica se o índice do menor objeto e diferente do índice atual*/
        if (i != menor_indice)
        {
            /** @brief caso verdadeiro é feita a troca de posição entre o objeto atual
            e o menor objeto
            */
            swap(alunos, i, menor_indice);
        };
    }
}