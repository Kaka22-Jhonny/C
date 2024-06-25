#include <stdio.h>

int main() {
    int quantidadedeNotas;
    float nota, soma = 0, media;
    
    printf("quantas notas deseja inserir? ");
    scanf("%d", &quantidadedeNotas);
    
    for(int i = 1; i <= quantidadedeNotas; i++) {
        printf("digite a nota #%d: ", i);
        scanf("%f", &nota);
        
         soma += nota;
    }
    media = soma / quantidadedeNotas;
    
    printf ("A média das notas é: %.2f\n", media);
    
    return 0;
}