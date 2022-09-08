#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int data,mes,ano,data2,mes2,ano2;

    printf("digite sua data:");
    scanf("%d/%d/%d",&data,&mes,&ano);

    printf("digite sua segunda data:");
    scanf("%d/%d/%d",&data2,&mes2,&ano2);

    if(ano > ano2 || data > data2 || mes > mes2){
        printf("a sua maior data é : %d/%d/%d",data,mes,ano);
    }
    else
    {
        printf("a sua maior data é : %d/%d/%d",data2,mes2,ano2);
    }
    
}
