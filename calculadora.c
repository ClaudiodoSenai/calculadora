#include <stdio.h>
void main(){
    int n1,n2,opcao,resultado;
    printf("Escolha o numero 1:\n ");
    scanf("%d", &n1);

    printf("Escolha o numero 2:\n ");
    scanf("%d", &n2);

    printf("Escolha a opção de calculo = 1(+)2(-)3(/)4(*)\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        resultado = n1+n2;
    }
    else if(opcao == 2){
        resultado = n1 - n2;
    }
    else if(opcao == 3){
        resultado = n1/n2;
    }
    else if(opcao == 4){
        resultado = n1*n2;
    }
    else{
        printf("Selecione uma opção válida");
    }

    printf("%d",resultado);
}
