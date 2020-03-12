def smallestMultiple(numbers):
    numbers.sort()
    multiple = numbers[-1]
    while(True):
        passTest = True
        for i in numbers:
            if (multiple%i != 0):
                passTest = False
                break
        if (passTest):
            return multiple
        else:
            multiple = multiple + numbers[-1]


print(smallestMultiple([20,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,1]))
