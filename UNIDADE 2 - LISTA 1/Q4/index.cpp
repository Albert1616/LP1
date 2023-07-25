/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @details Programa que lê os dados de um funcionário de um arquivo de texto externo
 * e imprime a folha de pagamento baseado no setor dos funcionários
 * @since 04/06/2023
 * @date 04/06/2023
 */


#include <iostream>
#include <fstream>
#include <string>

#include "header/departamento.h"
#include "header/funcionario.h"

using std::string;

int main(){
    /** @brief controlador para abrir e ler o arquivo f.txt*/
    std::ifstream arq("function/f.txt");
    /** @brief criação de um novo departamento com 10 funcionários*/
    Departamento d(10);
    /** @brief chamada do método copia_dados para copiar o conteudo do arquivo f.txt*/
    d.copia_dados(arq,10);
    /** @brief chamada do método imprime_folha_pagamento para imprimir os dados da folha de pagamento*/
    d.imprime_folha_pagamento("A");
    return 0;
}