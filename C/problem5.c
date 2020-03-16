#include <stdio.h>
#include <stdlib.h>

int SmallestMultipleAll(int cap){
    int num = cap;
    int finished = 0;
    while(1) {
        int i;
        for (i = 1; i <= cap; i++) {
            if(num%i != 0){
                finished = 0;
                break;
            } 
            finished = 1;
        }
        if (finished)
            return num;
        num++;
    }
}

int main (int argc, char * argv[]) {
    printf("%d\n", SmallestMultipleAll(20));
}
