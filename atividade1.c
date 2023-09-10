#include<stdio.h>

main(){

int idade, anostrabalhados;

printf("digite sua idade\n");
scanf("%d",&idade);

printf("digite os anos trabalhados\n");
scanf("%d", &anostrabalhados);

if(idade >= 60){
    printf("pode se aposentar\n");

} else if (anostrabalhados >= 25 && idade >= 60){
    printf("pode se aposentar\n");

}else{
    printf("nao pode se aposentar\n");
    
}

}
