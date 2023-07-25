/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @brief Programa que ler e imprime nomes de arquivo de texto externo
 * @since 04/06/2023
 * @date 04/06/2023
 */


#include <iostream>
#include <fstream>
#include <string>

using std::string;

int main(){
    /** @brief variável que controla as posições do vetor nomes*/
    int i = 0;
    /** @brief vetor que irá armazenar os nomes vindos do arquivo nomes.txt*/
    string nomes[4];
    /** @brief controlador de leitura do arquivo, será responsável por abri-lo*/
    std::ifstream arq;
    /** #brief string que assumira os valores de cada linha do arquivo*/
    string linha;
    /** @brief abertura do arquivo para leitura*/
    arq.open("nomes.txt");

    /** @details caso o arquivo tenha sido aberto com sucesso, sera feita a copia de suas
     * linhas para o vetor nomes.caso não tenha sido aberto, retorna uma mensagem de erro.
    */
    if(arq.is_open()){
        while(getline(arq, linha)){
            nomes[i] = linha;
            i++;
        }
    }else{
        std::cout << "O arquivo não foi aberto!" << std::endl;
    }

    /** @brief fechamento do arquivo*/
    arq.close();

    /** @brief impressão do vetor nomes na tela*/
    for(int j = 0; j<4;j++){
        std::cout << nomes[j] << std::endl;
    }

    return 0;
}