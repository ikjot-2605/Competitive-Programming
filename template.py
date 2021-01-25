'''input
'''
import sys
import math
import bisect
from sys import stdin,stdout
from math import gcd,floor,sqrt,log
from collections import defaultdict as dd
from bisect import bisect_left as bl,bisect_right as br

sys.setrecursionlimit(100000000)

inp    =lambda: int(input())
strng  =lambda: input().strip()
jn     =lambda x,l: x.join(map(str,l))
strl   =lambda: list(input().strip())
mul    =lambda: map(int,input().strip().split())
mulf   =lambda: map(float,input().strip().split())
seq    =lambda: list(map(int,input().strip().split()))

ceil   =lambda x: int(x) if(x==int(x)) else int(x)+1
ceildiv=lambda x,d: x//d if(x%d==0) else x//d+1

flush  =lambda: stdout.flush()
stdstr =lambda: stdin.readline()
stdint =lambda: int(stdin.readline())
stdpr  =lambda x: stdout.write(str(x))

mod=1000000007
def A():
    # string input 
    #input_a = input()
    # integer input 
    n = int(input())
    print(n)
    

def B():
    n = input(int())

def C():
    n = input(int())

    
def D():
    n = input(int())


def E():
    n = input(int())



def F():
    n = input(int())



#main function - change problem type here
def main():
    #t = int(input())
    t=1
    while t>0:
        A()
        t=t-1



if __name__ == "__main__":
    main()    
    

