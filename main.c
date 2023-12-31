#include <stdio.h>


int main(){
    int array[2] = {1,2};
    int x = 2;
    int p = 0;

    for (int i=1; i >= 0; i--){

        p = array[i] + x * p; 
    }

    printf("Valore di p = %d\n", p);
    return 0;
}