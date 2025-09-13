#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é fazer as peças se moverem usando loops.

int main() {
    
    // Vou usar numeros para o tanto de casas que cada peca pode andar.
    // É mais fácil de lembrar assim.
    int bispo_casas = 5;
    int torre_casas = 5;
    int rainha_casas = 8;
    
    // Primeiro o Bispo. Ele se move 5 casas na diagonal.
    // Diagonal é "cima" e "direita" ao mesmo tempo.
    printf("--- Movimento do Bispo ---\n");
    // Vou usar um 'for' pra contar as 5 casas.
    // 'i' vai ser o contador.
    for (int i = 0; i < bispo_casas; i++) {
        // A cada vez que o loop rodar, ele mostra a direcao.
        printf("Cima, Direita\n");
    }
    
    printf("\n"); // Pula uma linha pra nao ficar tudo junto.
    
    // Agora a Torre. Ela vai 5 casas pra direita.
    printf("--- Movimento da Torre ---\n");
    // Outro 'for' pra contar.
    for (int i = 0; i < torre_casas; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // Por último, a Rainha. Ela vai 8 casas pra esquerda.
    printf("--- Movimento da Rainha ---\n");
    // Mais um 'for' pra contar o movimento.
    for (int i = 0; i < rainha_casas; i++) {
        printf("Esquerda\n");
    }
    
    return 0;
}