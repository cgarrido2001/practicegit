
#include<stdio.h>

int main(){
    int array1[5] = {1,2,3,4,5};
    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    int array3 [3];
    array3[0] = 1;
    array3[1] = 2;
    array3[2] = 3;
    int len = sizeof(array3) / sizeof(array2[0]);
    for(int i = 0; i<len; i++){
        printf("%i ",array3[i]);
    }
    return 0;
}
