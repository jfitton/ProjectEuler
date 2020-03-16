#include <stdio.h>
#include <stdlib.h>

long max(long a, long b){
    if(a > b) return a;
    else return b;
}

long LargestPrime (long num){
    int i = 2l;
    while (num%i != 0l)
        i++;
    num = num/i;
    if(num == 1l) 
        return i;
    return max(LargestPrime(num), i);
}

int main(int argc, char * argv[]){
    printf("%ld\n", LargestPrime(600851475143));
}
