#include <stdio.h>

int main(){

  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if (idade < 12){
      printf("voce é uma criança!\n");
  } else if (idade >= 12 && idade < 18){
      printf("Voce é um adolecente!\n");
  } else if (idade >= 18 && idade < 60){
      printf("Voce é um adulto!\n");
  } else {
      printf("voce é um idoso!\n");
  }

  return 0;
}
