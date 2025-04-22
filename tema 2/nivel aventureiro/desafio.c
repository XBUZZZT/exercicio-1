  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main(){
    
    int ataque1 = 10, ataque2 =12;
    if (ataque1 > ataque2)
    {
      printf("Carta 1 venceu!\n");
    }else if (ataque1 < ataque2) 
    {
     printf("Carta 2 venceu!\n");
    } else {
      printf("Houve um empate!\n");
    }
    
    


    return 0;
  }