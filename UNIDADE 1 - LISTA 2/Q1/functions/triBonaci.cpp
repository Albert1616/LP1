#include "../header/triBonaci.h"
/** 
 *@brief função que calcula os termos da sequência de tribonacci
 * @param n faz referência ao número de termos desejado
 * @return o termo desejado
 */ 
int trina(int n){
    /**
        * @brief condição de parada,quando o parâmetro n é menor ou igual a um
        * @return retorna o valor zero
    */
    if(n <= 1){
        return 0;
    }
    /**
        * @brief condição de parada,quando o parâmetro n é igual a dois
        * @return retorna o valor um
    */
    else if(n == 2){
        return 1;
    }
    /**
        * @brief condição executada quando os casos de parada não são verdadeiros
        * @details realiza a chamada recursiva da função trina, passando parâmetros
        menores que não, e somando os termos para obter o termo desejado
        * @return retorna a soma dos termos, que é o termo procurado
    */
   else{
        return trina(n-1) + trina(n-2) + trina(n-3);
    }
}