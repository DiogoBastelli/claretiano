#include <stdio.h>

int main(){
int i , 
 numero = 0 ,
 positivos = 0, 
 somaPositivos = 0, 
 negativos = 0 , 
 somaNegativos=0 , 
 zeros = 0 , 
 quantidade = 0 ,
 mediaNegativos = 0;

printf("Quantos numeros voce deseja inserir ?: ");
scanf("%d" ,&quantidade);

for ( i = 0; i < quantidade; i++){
printf("insira o numero %d: " , i+1 );
scanf("%d" , &numero);

if(numero > 0){
    printf("o numero inserido e positivo: \n");
    positivos++;
    somaPositivos = somaPositivos + numero;
} else if (numero < 0 ){
    printf("o numero inserido e negativo: \n");
    negativos++;
    somaNegativos += numero;

}else {
    printf("O numero inserido e zero\n");
    zeros++;
}
}
printf("Quantidade de numeros positovos e de:  %d \n", positivos);
printf("Soma dos numeros positovos :  %d \n", somaPositivos);

if (negativos > 0) {
    mediaNegativos = somaNegativos / negativos;
    printf("Media dos numeros negativos: %d \n " , mediaNegativos);
} else {
    printf("Nenhum numero negativo inserido. \n");
}

printf("Quantidade de zeros: %d " , zeros);

}