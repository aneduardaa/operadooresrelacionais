#include<stdio.h>

main(){

double salarioatual, tempodeservico, percent500 = 0.25, salariofinal;

printf("digite o salario atual\n");
scanf("%lf", &salarioatual);

printf("digite o tempo de servico\n");
scanf("%lf", &tempodeservico);



if(salarioatual <= 500 && tempodeservico < 1){
    salariofinal =  (salarioatual * 0.25);
    printf("salario final e:%.2lf\n", salariofinal);

}else if(salarioatual <= 1000 && tempodeservico  <=3){
    salariofinal =  (salarioatual * 1) + 100;
    printf("salario final e:%.2lf\n", salariofinal);

} else if(salarioatual <= 1500 && tempodeservico <= 6){
    salariofinal = (salarioatual * 1.5) + 200;
    printf("salario final e:%.2lf\n", salariofinal);
}

 else if (salarioatual <= 2000 && tempodeservico <=10){
    salariofinal = (salarioatual * 0.25) + 300;
    printf("salario final e:%.2lf\n", salariofinal);

 }else if(salarioatual >= 2000 && tempodeservico >= 10){
    salariofinal = (salarioatual * 1.10) + 500;
    printf("salario final e:%.2lf\n", salariofinal);
    
 }else{
    salariofinal = salarioatual;
    printf("o salario e %.2lf", salariofinal);
}
}
