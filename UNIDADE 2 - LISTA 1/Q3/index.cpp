/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @details Programa que lê os nomes e as notas de 8 alunos de um arquivo externo
 * e grava em outro arquivo seus nomes, medias e situação
 * @since 04/06/2023
 * @date 04/06/2023
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using std::string;

int main(){
    /** @brief vetor para armazenas as informações completas de todos os alunos*/
    string alunos[8];
    /** @brief variável que será usada para percorrer todas as linhas do arquivo txt*/
    string linha;
    /** @brief variável usada para controlar as posições do array alunos*/
    int i = 0;
    /** @brief variável para abrir e ler o arquivo alunos.txt*/
    std::ifstream arq;
    arq.open("alunos.txt");

    /** @details se o arquivo tiver sido aberto com sucesso o conteúdo dele será copiado para
     * o vetor alunos; caso contrário, será exibida uma mensagem de erro.
    */
    if(arq.is_open()){
        while(getline(arq,linha)){
            alunos[i] = linha;
            i++;
        }
    }else{
        std::cout << "Arquivo não aberto";
    }

    /** @brief fechamento do arquivo*/
    arq.close();

    /** @brief vetor para armazenar os nomes de cada aluno*/
    string nomes[8];
    /** @brief vetor para armazenar os médias de cada aluno*/
    double medias[8];
    /** @brief vetor para armazenar o situação de cada aluno*/
    string situacao[8];

    /** @details laço em que ocorrerá a partição do vetor alunos, usando como elemento
     * separador os espaços em branco, em elementos individuais que serão destinados aos
     * vetores nomes, medias.
    */
    for(int i = 0; i<8;i++){
        double soma = 0;
        int cont = 0;
        std::stringstream ss(alunos[i]);
        string aux;
        for(;getline(ss,aux,' ');){
            if(cont > 0){
                soma+= std::stod(aux);
            }else{
                nomes[i] = aux;
            }
            cont++;
        }
        medias[i] = soma/3;
    }
    /** @details laço em que o vetor medias será percorrido e com base em seus elementos
     * o vetor situação será preenchido.
    */
    for(int i = 0; i<8;i++){
        if(medias[i] >= 7.0){
            situacao[i] = "Aprovado";
        }else{
            situacao[i] = "Reprovado";
        }
    }
    
    /** @brief criação de variável para abertura e gravação no arquivo Resultado.txt*/
    std::ofstream arq_gravacao;
    arq_gravacao.open("Resultado.txt");
    /** @brief laço em que ocorreram as respectivas gravações no arquivo Resultado.txt*/
    for(int i = 0; i<8;i++){
        arq_gravacao << nomes[i] << " " << std::fixed << std::setprecision(2) << 
        medias[i] << " " << situacao[i] << std::endl;
    }
    for(int i = 0; i<8;i++){
        std::cout << nomes[i] << " " << std::fixed << std::setprecision(2) << 
        medias[i] << " " << situacao[i] << std::endl;
    }
    return 0;
}