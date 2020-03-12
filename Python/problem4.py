def isPalindrome(string):
    length = len(string)//2
    for i in range(0,length):
        if (string[i] != string[len(string)-i-1]):
            return False
    return True

def largestPalindromeMultiple(num1, num2):
    maxPal = 0
    for i in range(0,num1+1):
        for j in range(0,num2+1):
            if (isPalindrome(str(i*j)) and i*j > maxPal):
                maxPal = i*j
    return maxPal

print(largestPalindromeMultiple(999,999))
