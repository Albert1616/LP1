//Matheus Albert da Silva Araújo
//20220051274

#include <iostream>

int menorInt(int vet[], int tam){//declaração da função
  if(tam == 0){//caso base, em que se o tamanho do vetor chegar a 0 o primeiro elemento
  //é retornado,assumindo como sendo o menor elemento do vetor
    return vet[0];
  }else{
    int menor = menorInt(vet,tam-1);//variável que recebe o retorno da função
    //com o mesmo vetor e o tamanho decrementado em um
    if(menor > vet[tam-1]){//passo recursivo, em que caso o menor seja maior que
    //elemento atual verificado o menor passa a ser esse elemento
      return vet[tam-1];
    }else{//e caso não seja menor, o menor continua com o mesmo valor
      return menor;
    }
  }
}

int main() {
  int vet[] = {10,5,7,1,287}; // vetor para teste
  int res = menorInt(vet,5);//chamada da função,com os parametros do vetor e o seu tamanho
  std::cout << res;// impressão do resultado na tela
}