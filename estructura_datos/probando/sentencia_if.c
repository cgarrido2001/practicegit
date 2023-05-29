
#include<stdio.h>

int main(){
    int n1,n2;
    
    printf("Digita 2 numeros: ");
    scanf("%i %i",&n1, &n2);
    
    if(n1 % n2 == 0){
        printf("El numero %i es divisible por %i", n1, n2);
    }
    else{
        printf("los numeros no son divisibles");
    }

    return 0;
}
