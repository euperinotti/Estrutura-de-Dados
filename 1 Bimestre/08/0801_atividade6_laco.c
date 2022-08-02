#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j;

    for(i = 1; i <= 6; i++){
        for(j = 1; j <= 6; j++){
            if(i + j == 7){
                printf("%i,%i\n", i, j);
            }
        }
    }
}