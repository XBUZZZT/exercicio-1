 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main() {
    int opcao;

    printf ("Menu Principal\n");
    printf ("1.  Iniciar jogo\n");
    printf ("2. Ver Regras\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execucao do jogo\n");
        break;

    case 2:
        printf("As regras são......\n");
        break;
    
    case 3:
        printf("Saindo do jogo...\n");
        break;
        
    case 4:
        printf("Execução do jogo\n");
        break;

    default:
       printf("Opcao invalida\n");
        break;
    }
 }