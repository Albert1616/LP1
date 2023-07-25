/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @brief Programa que lê numeros de um arquivo externo e grava em outro arquivo o maior,
 * menor e media dos números;
 * @since 04/06/2023
 * @date 04/06/2023
 */


#include <iostream>
#include <fstream>
#include <string>

using std::string;

int main(){
    /** @brief vetor para armazenas os numeros vindos do arquivo*/
    int num[10];
    /** @brief variável para armazenar a soma dos valores de num*/
    int soma = 0;
    /** @brief variável para controlar as posições do vetor*/
    int i = 0;
    /** @brief variável de leitura do arquivo*/
    std::ifstream arq;
    /** @brief abertura do arquivo de texto*/
    arq.open("numeros.txt");
    /** @brief variável que vai assumir o valor de cada linha do arquivo*/
    string linha;
    /** @details se o arquivo tiver sido aberto com sucesso cada linha do arquivo 
     * é convertida para inteiro e adicionada ao vetor num. caso contrario é retornada
     * uma mensagem de erro.
    */
    if(arq.is_open()){
        while(getline(arq,linha)){
            num[i] = stoi(linha);
            i++;
        }
    }else{
        std::cout << "O arquivo não foi aberto!" << std::endl;
    }

    /** @brief fechamento do arquivo de texto*/
    arq.close();

    /** @brief variáveis para armazenar o maior e o menor elemento do vetor, respectivamente*/
    int maior = num[0];
    int menor = num[0];

    /** @brief loop que vai encontrar o maior e o menor valores do vetor num e amazena-los
     * em maior e menor.
    */
    for(int i = 0; i<10;i++){
        if(num[i] > maior){
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }
        soma += num[i];
    }

    /** @brief variável de gravação, para gravar o conteudo de num em um arquivo externo;.
    */
    std::ofstream arq2;
    /** @brief abertura do arquivo copia_num.txt para gravação de dados*/
    arq2.open("copia_num.txt");
    
    /** @brief gravação do conteudo de maior, menor e média no arquivo txt*/
    arq2 << "Maior: " << maior << std::endl;
    arq2 << "Menor: " << menor << std::endl;
    arq2 << "Média: " << soma/10 << std::endl;

    return 0;
}