#include <stdio.h>
int main(){
    int num, senha, temp, num1, num2, num3, idade, nota, ano;
    printf("Digite o numero:");
    scanf("%d", &num);
if(num > 100){
    printf("Numero %d e maior que 100\n", num);
}
else{
    printf("Numero %d nao e maior que 100\n", num);
}
    printf("Digite o numero negativo:");
    scanf("%d", &num);
    if(num < 0){
        printf("Este numero %d e negativo\n", num);
    }
    else{
        printf("Este numero %d nao e negativo\n", num);
    }
printf("Digite a senha:");
scanf("%d", &senha);
if(senha == 1234){
    printf("Acesso permitido\n");
}
else{
    printf("Acesso negado\n");
}
printf("Digite um numero:");
scanf("%d", &num);
if(num % 5 == 0){
    printf("O numero %d e divisivel por 5\n", num);
}
else{
    printf("O numero %d nao e divisivel por 5\n", num);
}
printf("Digite a temperatura:");
scanf("%d", &temp);
if(temp > 30){
    printf("Ambiente quente\n");
}
else{
    printf("Temperatura normal\n");
}
printf("Digite o primeiro numero:");
scanf("%d", &num1);
printf("Digite o segundo numero:");
scanf("%d", &num2);
if(num1 == num2){
    printf("Numeros iguais\n");
}
else{
    printf("Numeros diferentes\n");
}
printf("Digite sua idade:");
scanf("%d", &idade);
if(idade < 13){
    printf("Criança\n");
}
else if(idade < 18){
    printf("Adolescente\n");
}
else{
    printf("Adulto\n");
}
printf("Digite o primeiro numero:");
scanf("%d", &num1);
printf("Digite o segundo numero:");
scanf("%d", &num2);
printf("Digite o terceiro numero:");
scanf("%d", &num3);
if(num1 > num2 && num1 > num3){
    printf("O %d e o maior\n", num1);
}
else if(num2 > num1 && num2 > num3){
    printf("O %d e o maior\n", num2);
}
else{
    printf("O %d e o maior\n", num3);
}
printf("Digite sua nota:");
scanf("%d", &nota);
if(nota >= 8){
    printf("Excelente\n");
}
else if(nota >= 6){
    printf("Aprovado\n");}
    else{
        printf("Reprovado\n");
    }
    printf("Digite o ano:");
    scanf("%d", &ano);
    if(ano % 4 == 0){
        printf("Ano bissexto\n");
    }
    else{
        printf("Ano comum\n");
    }
    return 0;
}
