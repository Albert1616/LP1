#ifndef TURMA_H
#define TURMA_H

#include "aluno.h"
/** @brief classe Turma juntamente com seus atributos e métodos*/

class Turma{
private:
    /** @brief capacidade máxima da turma*/
    int capacidade;
    /** @brief quantidade de vagas da turma*/
    int vagas;
    /** @brief lista de alunos da turma*/
    Aluno *alunos;
public:
    /** @brief retorna a capacidade da turma*/
    int GetCapacidade();
    /** @brief define o valor da capacidade da turma
     * @param c valor a ser assumido pela capacidade da turma
    */
    void SetCapacidade(int c);
    /** @brief retorna a quantidade de vagas da turma*/
    int GetVagas();
    /** @brief define o valor da quantidade de vagas da turma
     * @param v valor a ser assumido pela quantidade de vagas da turma
    */
    void SetVagas(int v);
    /** @brief retorna a lista de alunos da turma*/
    Aluno* getAluno();
    /** @brief define a lista de alunos da turma
     * @param alunos ponteiro que contém a lista de alunos 
    */
    void setAlunos(Aluno* alunos);
    /** @brief retorna a imprime os alunos da turma*/
    void imprimeAlunos();
    /** @brief construtor da classe Turma
     * @param c valor a ser assumido pela capacidade da turma
    */
    Turma(int c);
    /** @brief destrutor da classe Turma*/
    ~Turma();
    /** @brief método que ordena a lista de alunos da turma
     * @param filtro parâmetro de ordenação da lista de alunos
    */
    void ordenaCampos(string filtro);
};
#endif