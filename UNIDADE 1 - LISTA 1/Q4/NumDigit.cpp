//Matheus Albert da Silva Araújo
//20220051274


#include <iostream>

int NumDigit(int n,int digit,int resto = 0){//função para calcular o número de vezes que um digito aparece em um número
//sendo n o número em que será feita a procura; digit o digito procurado e resto o resto da divisão de n por 10
  if(n < resto){ //caso base, em que se o resto for maior que o n é retornado 0, que é o elemento neutro da soma
    return 0;
  }else{//passo indutivo, em que são declarados resto e num, como sendo, respectivamente,
  //o resto da divisão de n por 10 e a parte inteira da divisão de n por 10
    int Novoresto = n%10;
    int num = n/10;
    if(resto == digit){//caso resto seja igual ao digito procurado é retornado um mais
    //o retorno da função NumDigit, com os valores e n e resto atualizados, para num e Novoresto
      return 1 + NumDigit(num,digit,Novoresto);
    }else{//caso seja falso, é retornada apenas a função NumDigit, com os valores e n e resto atualizados, para num e Novoresto
      return NumDigit(num,digit,Novoresto);
    }
  }
}

int main() {
  int num_vezes = NumDigit(200254872,2);//variável para armazenas o retorno da função NumDigit
  std::cout << num_vezes;//impressão do resultado na tela
  return 0;
}