//Matheus Albert da Silva Araújo
//20220051274

#include <iostream>
#include "../headers/fatorial.h"//referência ao arquivo fatorial.h, no qual está a assinatura da função fat
#include "../headers/primalidade.h"//referência ao arquivo primalidade.h, no qual estão as assinaturas das funções 
//MaiorPrimo e NumDiv

int main() {
  int n; //variável para armazenar o número a ser lido
  std::cout << "Digite um numero" << std::endl;//comando para orientar o usuário, por meio de uma mensagem
  std::cin >> n;//leitura do número digitado pelo usuário
  int fatorial = fat(n);//variável ultilizada para armazenar o valor do fatorial
  int res = MaiorPrimo(fatorial);//variável utilizada para armezanar o maior primo menor que o fatorial
  std::cout << res;//impressão do resultado
}