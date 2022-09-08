#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    float n1,n2,n3;
    setlocale(LC_ALL,"portuguese");

    printf("Escreva seu numero: ");
    scanf("%f",&n1);

    printf("Escreva seu segundo umero: ");
    scanf("%f",&n2);

    printf("Escreva seu terceiro numero: ");
    scanf("%f",&n3);

    if(n1 > n2){
        printf("seu maior numero : %.0f",n1);
    }
    else if(n2 > n3){
        printf("seu maior numero : %.0f",n2);
    }
    else{
        printf("seu maior numero : %.0f",n3);
    }
}
