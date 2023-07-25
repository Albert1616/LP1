#include <iostream>
#include "./header/triBonaci.h"

/**
 * @author Matheus Albert da Silva Araújo (20220051274)
 * @brief Programa para calcular o N-ésimo termo da sequência de tribonacci
 * @since 06/05/2023
 * @date 06/05/2023
 */

int main(){
    /** @brief variável que armazena o retorno da função trina, com o parâmetro 4*/
    int termo = trina(4);
    /** @brief impressão do resultado na tela*/
    std::cout << termo;
    return 0;
}