  #include <stdio.h>

  int main(){
    int nota1, nota2, nota3;
    int media;

    printf("*** Progama de Cálculo de Media ***\n");

    printf("Digite sua Primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua Segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua Terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)  / 3;

    printf("A média é: %d", media);

    return 0;

  }