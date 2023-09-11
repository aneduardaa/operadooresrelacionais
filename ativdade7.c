#include<stdio.h>
#include<math.h>
main(){

float resultado, nota1, nota2, nota3, reprovado = 6.99, aprovado = 7;

printf("digite a primeira nota\n");
scanf("%f", &nota1);

printf("digite a segunda nota\n");
scanf("%f", &nota2);

printf("digite a terceira nota\n");
scanf("%f", &nota3);

resultado = nota1 * 1 + nota2 * 1 + nota3 * 2;

printf("Resultado\n %.2f\n", resultado);

if(resultado >= 7){
    printf("Aprovado\n");

}else{
    printf("reprovado");
}
