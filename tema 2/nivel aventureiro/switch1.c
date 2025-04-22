   #include <stdio.h>

   int main(){

    int variavel;

    printf("Digite um valor");
    scanf("%d", &variavel);

    switch (variavel) {
       case 1:
            printf("Código a ser executado se variavel == 1\n");
       break;
       case 2:
            printf("Codigo a ser executado se variavel == 2\n");
       break;
       default:
            printf("Codigo a ser executado se variavelnao for 1 ou \n");

    }
   }