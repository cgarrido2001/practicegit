
#include<stdio.h>
#include<math.h>

int main(){
    float r;
    printf("dime el radio de la circunferencia: ");
    scanf("%f", &r);
    
    float p = 2*M_PI*r;
    printf("el perimetro de tu circunferencia es de: %f", p);

    return 0;
}
