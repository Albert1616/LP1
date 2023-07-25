#include <iostream>
#include "../header_class/aluno.h"

/**
 @brief Retorna a matrícula do aluno
 @return A matrícula do aluno
*/
int Aluno::GetMatricula(){
return matricula;
};

/**
 @brief Modifica a matrícula do aluno
 @param mat Nova matrícula do aluno
*/
void Aluno::SetMatricula(int mat){
matricula = mat;
};

/**
 @brief Retorna o nome do aluno
 @return O nome do aluno
*/
string Aluno::GetNome(){
return nome;
};

/**
 @brief Modifica o nome do aluno
 @param n Novo nome do aluno
*/
void Aluno::SetNome(string n){
nome = n;
};

/**
 @brief Retorna a primeira nota do aluno
 @return A primeira nota do aluno
*/
float Aluno::GetNota1(){
return nota1;
};

/**
 @brief Modifica a primeira nota do aluno
 @param n1 Nova primeira nota do aluno
*/
void Aluno::SetNota1(float n1){
nota1 = n1;
};

/**
 @brief Retorna a segunda nota do aluno
 @return A segunda nota do aluno
*/
float Aluno::GetNota2(){
return nota2;
};

/**
 @brief Modifica a segunda nota do aluno
 @param n2 Nova segunda nota do aluno
*/
void Aluno::SetNota2(float n2){
nota2 = n2;
};

/**
 @brief Retorna a terceira nota do aluno
 @return A terceira nota do aluno
*/
float Aluno::GetNota3(){
return nota3;
};

/**
 @brief Modifica a terceira nota do aluno
 @param n3 Nova terceira nota do aluno
*/
void Aluno::SetNota3(float n3){
nota3 = n3;
};

/**
 @brief Calcula a média das notas do aluno
 @return A média das notas do aluno
*/
float Aluno::media(){
return (nota1+nota2+nota3)/3;
}

/**
 @brief Construtor padrão da classe Aluno
*/
Aluno::Aluno(){
matricula = 0;
nome = " ";
nota1 = 0;
nota2 = 0;
nota3 = 0;
}
/**
 @brief Construtor da classe Aluno
 @param mat Matrícula do aluno
 @param n Nome do aluno
 @param n1 Primeira nota do aluno
 @param n2 Segunda nota do aluno
 @param n3 Terceira nota do aluno
*/
Aluno::Aluno (int mat, string n, float n1, float n2,float n3){
matricula = mat;
nome = n;
nota1 = n1;
nota2 = n2;
nota3 = n3;
};

/**
 @brief Destrutor da classe Aluno
*/
Aluno::~Aluno(){
}