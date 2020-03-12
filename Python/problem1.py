def OrMultiplesBelowCap(numbers,cap):
    total = 0
    for i in range(1,cap):
        for j in numbers:
            if (i%j == 0):
                total = total + i
                break;

    return total

print(OrMultiplesBelowCap([3,5],1000))
