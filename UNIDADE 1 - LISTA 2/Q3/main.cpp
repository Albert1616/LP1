/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @brief Programa que implementa as classes turma e aluno juntamente com seus métodos
 * @since 06/05/2023
 * @date 06/05/2023
 */

#include <iostream>
#include <string>
#include "header_class/aluno.h"
#include "header_class/turma.h"

using std::string;

int main(){
    /** @brief variável que armazena o número de vagas da turma*/
    int vagas = 5;
    /** @brief lista do tipo Aluno com o tamanho de vagas, que armazena 5 alunos*/
    Aluno* lst_alunos = new Aluno[vagas]{
        {201810, "Matheus", 7.5,4.1,2.0},{201704, "Albert", 5.5,4.0,10.0},
        {201540, "Rodrigo", 4.0,1.0,7.0}, {201851, "Leticia", 10.0,7.0,1.0},
        {202205, "Rayssa", 10.0, 7.5, 8.0}
    };
    /** @brief nova turma com capacidade de 10*/
    Turma* turma = new Turma(10);
    /** @brief definição do valor de vagas*/
    turma->SetVagas(vagas);
    /** @brief definição da lista de alunos*/
    turma->setAlunos(lst_alunos);
    /** @brief impressão não ordenada da lista de alunos*/
    turma->imprimeAlunos();
    std::cout << "---------" << std::endl;
    /** @brief ordenação da lista de alunos pelo parâmetro "nota"*/
    turma->ordenaCampos("nome");
    /** @brief impressão ordenada pelo parâmetro "nota" da lista de alunos*/
    turma->imprimeAlunos();
    return 0;
}