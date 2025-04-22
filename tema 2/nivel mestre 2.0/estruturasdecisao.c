#include <stdio.h>

int main(){

   int opcao;
   float nota1, nota2, media;

   printf("Menu de gerenciamento de estruturas\n");
   printf("1. Calcular media\n");
   printf("2. Determinar status\n");
   printf("3. Sair\n");
   printf("Escolha uma opcao: ");
   scanf("%d", &opcao);

 
  switch (opcao)
  {
  case 1:
   printf("Calcular a media\n");
   printf("Digite a primeira nota\n");
   scanf("%f", &nota1);
   printf("Digite a segunda nota\n");
   scanf("%f", &nota2);

   // testar a condicao se a nota é maior ou igual a 0 ou menor ou igual a 10
   if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
      media = (nota1 + nota2) / 2;
      printf("A media e %.2f\n", media);
   } else {
      printf("Entrada com valores errados!\n");
   }
   
   break;
  
  case 2:
   printf("Deteminar status\n");
   printf("Entrar com a media: ");
   scanf("%f", &media);
   //media >= 5 ?  printf("Aprovado!\n") : printf("Reprovado!\n");
   
   if (media >= 7 )
   {
      printf("Aprovado!\n");
   } else if (media >= 5)
   {
      printf("Recuperacao!\n");
   } else {
      printf("Reprovado!\n");
   }
   

  case 3: 
   printf("Saindo do programa...\n");

  default:
   printf("Opcao invalida\n");
   break;
  }
}