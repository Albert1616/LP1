#include "../headers/fatorial.h"

int fat(int n){//função recursiva para calcular o fatorial de um número n
  if(n == 1){//caso base, em que o n é igual a 1,é retornado um,que é o elemento neutro da multiplicação
    return 1;
  }else{
    return n*fat(n-1);//chama a função com o parâmetro n decrementado e multiplica o resultado por n
  }
}