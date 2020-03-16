#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num) {
    char str[33];
    snprintf(str,sizeof(int)*33, "%d", num);
    int len = strlen(str);
    int i = 0;
    while (i < len/2) {
        if (str[i] != str[len-i-1])
            return 0;
        i++;
    }
    return 1;
}

int LargestPalindrome() {
    int i,j,max;
    max = -1;
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < 1000; j++) {
            int val = i*j;
            if (isPalindrome(val) && val > max){
                max = val;
            }
        }
    }
    return max;
}

int main(int argc, char * argv[]) {
    printf("%d\n", LargestPalindrome());
}
