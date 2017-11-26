# -*- coding: utf-8 -*-
# @Author: kg
# @Date:   2017-11-26 12:31:09
# @Last Modified by:   kg
# @Last Modified time: 2017-11-26 12:31:40
#!/bin/python3

isPrime = [1]*300000
isPrime[0] = isPrime[1] = 0
for i in range(300000):
    if isPrime[i]:
        for j in range(i*i,300000,i):
            isPrime[j] = 0

def maxDifference(startVal, endVal):
    x,y = None,None
    for i in range(startVal,endVal+1):
        if isPrime[i]==1:
            x = i
            break
    for i in range(endVal,startVal-1,-1):
        if isPrime[i]==1:
            y = i
            break
    try:
        return y-x
    except:
        return 0

if __name__ == "__main__":
    q = int(input().strip())
    for a0 in range(q):
        startVal, endVal = input().strip().split(' ')
        startVal, endVal = [int(startVal), int(endVal)]
        result = maxDifference(startVal, endVal)
        print(result)
