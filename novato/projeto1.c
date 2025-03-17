   #include <stdio.h>

   int main(){
       int idade, matricula;
       double altura;
       char nome[50];

       printf("Digite sua idade: \n");
       scanf("%d", &idade);

       printf("Digite sua altura: \n");
       scanf("%lf", &altura);

       printf("Digite sua matricula: \n");
       scanf("%d", &matricula);

       getchar();

       printf("Digite seu nome: \n");
       fgets(nome,sizeof(nome),stdin);

       printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
       printf("Idade: %d - Altura: %f", idade, altura);

       return 0;

   }