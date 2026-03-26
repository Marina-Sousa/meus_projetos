#include <stdio.h>
int main(){
int i;
for(i=1; i<=20; i++){
    if(i % 2 == 0){
        printf("Porta %d - Aberta\n", i);
    }
    else{
        printf("Porta %d - Fechada\n", i);
    }
}
return 0;
}