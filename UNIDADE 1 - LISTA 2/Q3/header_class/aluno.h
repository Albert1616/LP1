#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using std::string;

/** @brief classe aluno, seus atributos privados e métodos*/

class Aluno{
/** @brief atributos privados da classe Aluno*/
private:
    /** * @brief matricula do aluno*/
    int matricula = 0;
    /** @brief nome do aluno*/
    string nome ="";
    /** @brief primeira nota do aluno*/
    float nota1 = 0;
    /** @brief segunda nota do aluno*/
    float nota2 = 0;
    /** @brief terceira nota do aluno*/
    float nota3 = 0;
/** @brief métodos da classe aluno*/
public:
    /** @brief método do tipo inteiro que retorna a matricula do aluno*/
    int GetMatricula();
    /** @brief método que define a matricula do aluno
     * @param mat número que será assumido pela matricula
    */
    void SetMatricula(int mat);
    /** @brief método que retorna o nome do aluno*/
    string GetNome();
    /** @brief método que define o nome do aluno
     * @param n caractere que será assumido pela nome
    */
    void SetNome(string n);
    /** @brief método que retorna a primeira nota do aluno*/
    float GetNota1();
    /** @brief método que define a primeira nota do aluno
     * @param n1 valor que será assumido pela primeira nota
    */
    void SetNota1(float n1);
    /** @brief método que retorna a segunda nota do aluno*/
    float GetNota2();
    /** @brief método que define a segunda nota do aluno
     * @param n2 valor que será assumido pela segunda nota
    */
    void SetNota2(float n2);
    /** @brief método que retorna a terceira nota do aluno*/
    float GetNota3();
    /** @brief método que define a terceira nota do aluno
     * @param n3 valor que será assumido pela terceira nota
    */
    void SetNota3(float n2);
    /** @brief método que calcula a média do aluno*/
    float media();
    /** @brief construtor padrão da classe Aluno*/
    Aluno();
    /** @brief construtor da classe Aluno
     * @param mat matricula do aluno
     * @param n nome do aluno
     * @param n1 primeira nota do aluno
     * @param n2 segunda nota do aluno
     * @param n3 terceira nota do aluno
    */
    Aluno (int mat, string n, float n1, float n2,float n3);
    /** @brief destrutor da classe Aluno*/
    ~Aluno();
};
#endif