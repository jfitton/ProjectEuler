#include <stdio.h>
#include <stdlib.h>

int fibonacciUnderCap(cap,even) {
    int curr, prev, next, total;
    curr = prev = 1;
    total = 0;
    while (curr <= cap) {
        if (even && curr%2 == 0)
            total = total + curr;
        next = curr + prev;
        prev = curr;
        curr = next;
    }
    return total;
}

int main(int argc, char * argv[]) {
    int True = 1;
    printf("%d\n", fibonacciUnderCap(4000000,True));
}
