#include <stdio.h>

int main(){

float nota_1, nota_2, media;
int opcao_menu;

printf("Olá, digite o número de uma opção abaixo.\n");
printf("1. Calcular média\n");
printf("2. Determinar status\n");
scanf("%d", &opcao_menu);

switch(opcao_menu)
    {
    case 1:
    printf("Digite o número da primeira nota:\n");
    scanf("%f", &nota_1);
    printf("Digite o número da segunda nota:\n");
    scanf("%f", &nota_2);

    if ( (nota_1 >= 0 && nota_1 <= 10) && (nota_2 >= 0 && nota_2 <=10) ) {
        media = (nota_1 + nota_2) / 2;
        printf("A média é %.2f\n", media);

    } else {
        printf("Entrada com valores incorretos");
    }
    break;
    

    case 2:
    printf("Determinar status\n");
    printf("Entrar com a média:\n");
    scanf("%f", &media);

    media >= 7.0 ? printf("Parabéns, você foi aprovado") : printf("Poxa, você reprovou.");
    break;

    default:
    printf("Opção inválida");
    break;

}





}