#include <stdio.h>
#include <stdlib.h>

int OrMultiplesBelowCap (int nums[], int cap) {
    int total = 0;
    int i,j;
    for (i = 0; i < cap; i++) {
        for (j = 0; j < (sizeof(nums)/sizeof(nums[0])); j++) {
            if (i%nums[j] == 0) {
                total = total + i;
                break;
            }
        }
    }
    return total;
}

int main (int argc, char *argv[]) {
    int numbers[2];
    numbers[0] = 3;
    numbers[1] = 5;
    printf("%d\n", OrMultiplesBelowCap(numbers, 1000));
}
