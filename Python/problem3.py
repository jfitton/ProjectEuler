import math

def largestPrime(num):
    prime = 0;
    for i in range(2,num+1):
        if (num%i == 0):
            prime = i
            break
    prime = num//prime
    if(prime == 1):
        return num
    return largestPrime(prime)

print(largestPrime(600851475143))
