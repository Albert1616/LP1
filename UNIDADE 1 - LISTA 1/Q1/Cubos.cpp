//Matheus Albert da Silva Araújo
//20220051274

#include <iostream>
#include <math.h> // biblioteca para poder ultilzar a função pow

int cubos(int n){
  if(n == 0){ //caso base, em que o numero de termos é igual a zero,  logo a soma é igual a zero
    return 0;
  }else{
    return pow(n,3) + cubos(n-1); // passo recursivo, em que é feita soma do ultimo termo 
    //ao cubo mais o resultado da chamada da função com um parametro menor
  }
}

int main() {
  int res = cubos(2);//variável para receber o retorno da função
  std::cout << res;//impressão do resultado na tela
}