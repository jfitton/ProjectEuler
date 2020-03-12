def fibonacciUnderCap(cap, even):
    val = 1
    prevVal = 1
    total = 0
    while val <= cap:
        if(even and val%2 == 0):
            total = total + val
        newVal = val + prevVal
        prevVal = val
        val = newVal
    return total

print(fibonacciUnderCap(4000000, True))
