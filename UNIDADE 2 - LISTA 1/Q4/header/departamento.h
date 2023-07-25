#ifndef DEPART_H
#define DEPART_H

#include "funcionario.h"
#include <fstream>
/** @brief declaração da classe Departamento*/
class Departamento
{
    /** @brief atributos da classe Departamento*/
private:
    int numero_funcionarios;
    Funcionario *pessoal;
    /** @brief métodos públicos da classe Departamento*/
public:
    Departamento(int numero);
    ~Departamento();
    void copia_dados(std::ifstream &arq, int n);
    void imprime_funcionarios();
    void imprime_folha_pagamento(string depto);
};

#endif