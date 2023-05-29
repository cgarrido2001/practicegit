
#include<stdio.h>

int main(){
    char a = 'e'; //tamano = 1 byte, rango: 0..255
    short b = -15; //tamano = 2 bytes, rango : -128...127
    int c = 1024; //tamano  = 2bytes, rango: -32768...32767
    unsigned int d = 128; //tamano= 2bytes, rango: 0...65535 solo enteros positivos o 0
    long e = 123456; //tamano= 4bytes, para printear se nesecita long int -> %li
    float f = 3.1416; //tamano= 4bytes
    double g = 12345.123456; //tamano = 8bytes -> long float -> %lf
    printf("El elemento es: %lf", g);
    
    return 0;
}
