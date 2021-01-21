#include <stdio.h>
#include <stdint.h>

// print binary represetnation of a decimal number a
void printBinary(uint16_t a){
    for (uint16_t i = 32768; i > 0; i = (i>>1)){
        // printf("i = %d\n", i);
        if (a & i){
            printf("1");
        }
        else
        {
            printf("0");
        }
        
    }
    printf("\n");
}

int main(){
    uint16_t a = 2;
    printBinary(a);
    return 0;
}