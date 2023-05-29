
#include<stdio.h>
#include<math.h>

int main(){
    
    float a,b,c;
    
    printf("Ingresa el valor del cateto 1: ");
    scanf("%f", &a);
    printf("Ingresa el valor del cateto 2: ");
    scanf("%f", &b);
    
    c = sqrt(pow(a,2)+pow(b,2));
    
    printf("la hipotenusa es: %.2f\n", c);
    

    return 0;
}
