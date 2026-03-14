#include <stdio.h>
int main(){
   int lado1, lado2, lado3;
   printf("Digite o primeiro lado: ");
   scanf("%d", &lado1);
   printf("Digite o segundo lado: ");
   scanf("%d", &lado2);
   printf("Digite o terceiro lado: ");
   scanf("%d", &lado3);
   if(lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2){
      printf("Este e um triangulo.\n");
         if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
             printf("Este e um triangulo equilatero\n");
      }
          else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
             printf("Este e um triangulo isosceles\n");
      }
          else{
             printf("Este e um triangulo escaleno\n");
      }
   }
   else{
         printf("Isto nao e um triangulo.\n");
      }

   return 0;
}