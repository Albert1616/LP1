#include "../header/departamento.h"
#include "../header/funcionario.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

/** @brief construtor da classe Departamento*/
/** @param numero numero de funcionarios do departamento*/
Departamento::Departamento(int numero)
{
    this->numero_funcionarios = numero;
}
/** @brief destrutor da classe Departamento*/
Departamento::~Departamento()
{
    delete[] pessoal;
}
/** @brief método que copia os dados dos funcionarios do arquivo txt e armazena no vetor pessoal*/
/** @param arq controlador responsável por abrir e ler o arquivo txt*/
/** @param n tamanho do vetor pessoal*/
void Departamento::copia_dados(std::ifstream &arq, int n)
{
    /** @brief novo vetor de Funcionario*/
    pessoal = new Funcionario[n];
    /** @brief variável que vai passar por todas as linhas do arquivo*/
    string linha;
    /** @brief controlador das posições do vetor pessoal*/
    int cont = 0;
    /** @details se o arquivo tiver sido aberto será feita uma partição nas linhas do arquivo txt
     * de modo que os dados serão separados por meio da tabulação e armazenados em cada
     * posição do vetor info, depois será feita a chamada ao construtor Funcionario que
     * receberá as posições do vetor e sera armazenado em pessoal.caso o arquivo não tenha sido
     * aberto,será apresentada uma mensagem de erro
     */
    if (arq.is_open())
    {
        while (getline(arq, linha))
        {
            string info[4];
            std::istringstream iss(linha);
            int i = 0;
            string palavra;

            while (iss >> palavra)
            {
                info[i] = palavra;
                i++;
            }

            pessoal[cont] = Funcionario(info[0], info[1], info[2], std::stod(info[3]));
            cont++;
        }
    }
    else
    {
        std::cout << "Arquivo não foi aberto!" << std::endl;
    }

    arq.close();
}
/** @brief método que imprime o conteudo do vetor pessoal*/
void Departamento::imprime_funcionarios()
{
    for (int j = 0; j < this->numero_funcionarios; j++)
    {
        std::cout << pessoal[j].GetNome() << std::endl;
    }
}
/** @brief método que imprime os as informações dos funcionários de um determinado setor
 * bem como a soma de seus salarios.
 */
/** @param depto filtro que indica qual será o departamento alvo da folha de pagamento*/
void Departamento::imprime_folha_pagamento(string depto)
{
    /** @brief variável em que será armazenada a soma dos salários*/
    double total = 0;
    std::cout << "Folha de pagamento Depto " << depto << std::endl;
    std::cout << std::setw(10) << "Funcional"
              << std::setw(10) << "NOME"
              << std::setw(10) << "DEPTO"
              << std::setw(10) << "SALARIO" << std::endl;

    /** @brief impressão das informações*/
    for (int i = 0; i < this->numero_funcionarios; i++)
    {
        if (pessoal[i].GetDep() == depto)
        {
            total += pessoal[i].GetSalario();
            std::cout << std::setw(5) << pessoal[i].GetFunc() << "\t"
                      << std::setw(13) << pessoal[i].GetNome() << "\t"
                      << std::setw(3) << pessoal[i].GetDep() << "\t"
                      << std::setw(8) << std::fixed << std::setprecision(2) << pessoal[i].GetSalario()
                      << std::endl;
        }
    }
    std::cout << "VALOR TOTAL: R$ " << std::fixed << std::setprecision(2) << total;
}
