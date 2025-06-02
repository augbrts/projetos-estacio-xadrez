# projetos-estacio
/*
 * Simulador de movimentos de pecas de xadrez: Torre, Bispo, Rainha e Cavalo
 * Torre, Bispo e Rainha utilizam recursividade
 * Cavalo utiliza loops complexos
 */

 #include <stdio.h>

 // Função recursiva para o movimento da Torre
 void moverTorre(int casas) {
     if (casas == 0) return; // Caso base: nenhuma casa restante para mover
     printf("Direita\n");
     moverTorre(casas - 1); // Chamada recursiva para mover a próxima casa
 }
 
 // Função recursiva para o movimento do Bispo
 void moverBispo(int casas) {
     if (casas == 0) return; // Caso base: nenhuma casa restante para mover
     printf("Cima Direita\n");
     moverBispo(casas - 1); // Chamada recursiva para mover a próxima casa
 }
 
 // Função recursiva para o movimento da Rainha
 void moverRainha(int casas) {
     if (casas == 0) return; // Caso base: nenhuma casa restante para mover
     printf("Esquerda\n");
     moverRainha(casas - 1); // Chamada recursiva para mover a próxima casa
 }
 
 int main() {
     // Movimento da Torre: 5 casas para a direita
     printf("Movimento da Torre (5 casas para a Direita):\n");
     moverTorre(5);
 
     // Movimento do Bispo: 5 casas na diagonal
     printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita):\n");
     moverBispo(5);
 
     // Movimento da Rainha: 8 casas para a esquerda
     printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
     moverRainha(8);
 
     // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita (usando loops complexos)
     printf("\nMovimento do Cavalo (2 casas para Cima e 1 casa para a Direita):\n");
     for (int i = 0; i < 2; i++) { // Loop para as 2 casas para cima
         printf("Cima\n");
     }
     for (int j = 0; j < 1; j++) { // Loop para 1 casa para a direita
         printf("Direita\n");
     }
 
     // Movimento do Bispo com loops aninhados
     printf("\nMovimento do Bispo (5 casas na Diagonal usando Loops Aninhados):\n");
     for (int i = 0; i < 5; i++) { // Loop externo para o movimento vertical
         for (int j = 0; j < 1; j++) { // Loop interno para o movimento horizontal
             printf("Cima Direita\n");
         }
     }
 
     return 0;
 }
