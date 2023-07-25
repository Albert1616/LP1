#include "../headers/primalidade.h"

int NumDiv(int n, int divisor){//função que, dado um numero n e um argumento opcional divisor,
//é retornada o numero de divisores de n
  if(divisor > n){//caso base, em que se o divisor for maior que n, é retornado 0 que
  //é o elemento neutro da soma
    return 0;
  }else{//passo indutivo, em que é feita um checagem se o n é divisel pelo divisor atual
    if(n%divisor == 0){//se verdadeiro, é retornado a soma de um com o retorno da função NumDiv
    //com o mesmo n e com divisor incrementado em um
      return 1+NumDiv(n,divisor+1);
    }else{//se falsa, é retornada apenas a função NumDiv com o mesmo n e 
    //com divisor incrementado em um
      return NumDiv(n,divisor+1);
    }
  }
}

int MaiorPrimo(int n,int maior,int cont){//função recursiva para encontrar o maior primo menor que o n; 
//maior é um parâmetro opicinal que armazena o maior primo encontrado até o momento 
//e cont é um parâmetro, tambem opicional, que auxilia na busca e serve como condição para o caso base
  if(cont >= n){//caso base, em que se o valor do contador ultrapassar o valor de n o maior é retornado
    return maior;
  }else{//passo recursivo, em que é feita a verificação se cont é primo, 
  //ou seja se possui apenas dois divisores,e se ele é maior que o valor atual do contador; 
    if(NumDiv(cont) == 2 && maior < cont){//caso seja verdadeiro a função é chamada atualizando o valor do maior e do contador
      return MaiorPrimo(n,cont, cont+1);
    }else{//caso em que é falsa a função é chamada atualizando apenas o valor do contador
      return MaiorPrimo(n,maior,cont+1);
    }
  }
}