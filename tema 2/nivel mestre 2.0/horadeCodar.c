   #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>

   int main(){
       int numeroJogador, numeroComputador, resultado;
       char tipoComparacao;

       //Gerar numero aleatorio
       srand(time(0));
       numeroComputador = rand() % 100 + 1; //Numero entre 1 a 100
       
       // Inicio do jogo 
       printf("Bem-vindo ao jogo maior , menor ou igual!\n");
       printf("voce deve escolher um numero e o tipo de comparacao.\n");
       printf("M. maior\n");
       printf("N. menor\n");
       printf("I. igual\n");
         

       printf("Escolha a comparacao: ");
       scanf("%c", &tipoComparacao);

       printf("Digite seu nuemro (entre 1 e 100): ");
       scanf("%d", &numeroJogador);

       //Exibir numero do computador 
       //printf("o numero do computador é: %d\n", numeroComputador);

       switch (tipoComparacao)
       {

       case 'M':
       case 'm':
            printf("Voce escolheu a opcao maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

        case 'N':
        case 'n':
             printf("Voce escolheu a opcao menor!\n");
             resultado = numeroJogador < numeroComputador ? 1 : 0;

        break;

        case 'I':
        case 'i':
             printf("Voce escolheu a opcao igual!\n");
             resultado = numeroJogador == numeroComputador? 1 : 0;
        break;
       
       default:
       printf("Opcao de jogo invalida\n");
        break;
       }

       printf("o numero do computador é: %d e o do jogador é:\n", numeroComputador, numeroJogador);
    
       if (resultado == 1 )
       {
        printf(" Parabens ,voce vendeu!\n");
       } else {
        printf(" Infelizmente , voce perdeu!\n");
       }
       

    return 0;
 }