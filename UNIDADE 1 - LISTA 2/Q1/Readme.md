b - O que é recursão de cauda? Quais as implicações da recursão em cauda na execução
do programa? Qual a solução para a recursão em cauda?
R: A recursão em cauda é um tipo especial de recursão, ela ocorre quando,dentro de uma função recursiva, a chamada recursiva da função é a última instrução a ser realizada pela função, ou seja, a chamada recursiva é feita ao final da função. Como consequência, o resultado é passado de volta pela pilha de chamadas recursivas, sem a necessidade de criação de variáveis auxiliares. 

c - A função recursiva que você implementou gera recursão de cauda? Justifique.
R: Não, pois antes que o resultado seja retornado são feitas três chamadas recursivas, e depois a soma delas, para so então retornar o resultado, logo a função trina não realiza uma chamada recursiva como sua última instrução.

d - Em alguns casos, quando estamos trabalhando com funções recursivas, ocorre o Stack
Overflow. Explique o que é e porque ocorre esse overflow.
R: Stack Overflow ocorre quando a pilha de chamadas de função fica cheia e a memória não possui espaço suficiente para armazenar as informações trazidas com as chamadas recursivas. Isso ocorre quando há um erro na definição do caso base deixando a função recursiva sem uma condição de parada adequada e levando a uma chamada recursiva infinita.