#include <stdio.h>


int main (){

    int numero, i;

    printf("Digite um número para calcularmos a tabuada:\n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++) 
    
    {
        printf("%d x %d = %d \n", numero, i, i * numero);

    }
       
    
        return 0;
}
   
// ESTRUTURA DO WHILE
           // int numero;

        // do {

           // printf("Digite um número par para sair do programa.\n");
          //  scanf("%d", &numero);

            //if(numero % 2 == 0){
           //     printf("Esse número é par.\n");
          //  } else {
          //      printf("Esse número é ímpar.\n");
          //  }

       // } while( numero % 2 != 0);

        // printf ("Você digitou um número par, saindo do programa...\n");


   // ESTRUTURA WHILE
   
    //while (i <= 10){

    //int i = 0;

       // if (i % 2 == 0){
       //     printf("O número %d é par! \n", i);
       // } else {
       //     printf("O número %d é impar!\n", i);
       // }

       // i++;
   // }

// ESTRUTURA FOR
    //for (int i = 1; i <= 5; i++){
        //printf("%d\n", i);
    //}

