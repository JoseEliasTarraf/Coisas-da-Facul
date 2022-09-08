#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int ano;
    
    setlocale(LC_ALL,"portuguese");

    printf("Digite o ano: ");
    scanf("%d",&ano);

    //Calculando se o resto da divisão é 0

    if(ano % 400 == 0 ){
        printf("Ano Bissexto:");
        
    }
    else if((ano % 4 == 0 ) && (ano % 100 !=0)){
        printf("Ano Bissexto");
    }
    else{
        printf("Ano não bissexto");
    }
}
