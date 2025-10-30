#include <stdio.h>

int main() {
    // ==============================
    // Simulação do movimento das peças de xadrez
    // Tema 4 - Estruturas de repetição (for, while, do-while)
    // ==============================

    // ==============================
    // 1️⃣ Movimento da TORRE (usando FOR)
    // ==============================
    int casasTorre = 5; // Número de casas que a Torre se moverá
    printf("Movimento da TORRE:\n");

    // A Torre move-se em linha reta. Aqui, 5 casas para a direita.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n"); // Linha em branco apenas para separar as peças

    // ==============================
    // 2️⃣ Movimento do BISPO (usando WHILE)
    // ==============================
    int casasBispo = 5; // Número de casas que o Bispo se moverá
    int contadorBispo = 1;

    printf("Movimento do BISPO:\n");

    // O Bispo move-se na diagonal (ex: "Cima, Direita")
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // ==============================
    // 3️⃣ Movimento da RAINHA (usando DO-WHILE)
    // ==============================
    int casasRainha = 8; // Número de casas que a Rainha se moverá
    int contadorRainha = 1;

    printf("Movimento da RAINHA:\n");

    // A Rainha move-se em todas as direções. Aqui, simula 8 casas para a esquerda.
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ==============================
    // Fim da simulação
    // ==============================
    printf("\nFim da simulacao de movimentos.\n");

    return 0;
}

