//Matheus Albert da Silva Araújo
//20220051274

#include <iostream>

float NumHa(int n){ //função com tipo floar e um n indicando o número de termos desejados
  if(n == 0){ // caso base, em que o número de termos desejados é 0;
    return 0;//retorna 0, que é o elemento neutro da soma
  }else{
    return (float)1/n + NumHa(n-1);// passo indutivo, em que é retornada a soma entre ultimo dos n termos,
    // e o resto dos n-1 termos, segundo a chamada da função
  }
}

int main() {
  float res = NumHa(3);//variável para receber o resultado de retorno da função
  std::cout << res;//impressão do resultado
}