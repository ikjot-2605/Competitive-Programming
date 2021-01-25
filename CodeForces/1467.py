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
    n = int(input())
    list = []
    prelis = [9,8,9]
    op = 1
    if(n==1):
        list=[9]
    elif(n==2):
        list = [9,8]
    else:
        a=0
        list = prelis
        for i in range(n-3):
            list.append(a)
            a+=1        
            if(a==10 and op == 1):
                a=0

    for i in list: 
        print(i, end="")      
    print('\n')         
    # for i in range(len(list)):
    #     print(list[i])            

def B():
    n = int(input())
    list = []
    for i in range(n):
        x= int(input())
        list.append(x)
    curr= 0
    for i in range(1,n-1,1):
        if((list[i]>list[i-1] and list[i]>list[i+1])  or (list[i]<list[i-1] and list[i]<list[i+1])):
            curr=curr+1
    change = 0
    mini = curr
    for i in range(1,n-1,1):
        if(list[i]>min(list[i-1],list[i+1])):
            x=max(list[i-1],list[i+1])
        elif(list[i]<max(list[i-1],list[i+1])):
            x=min(list[i-1],list[i+1])  
        curr_here = 0
        for j in range(1,n-1,1):
            if((list[j]>list[j-1] and list[j]>list[j+1])  or (list[j]<list[j-1] and list[j]<list[j+1])):
                curr_here=curr_here+1      
        if(curr_here<mini):
            mini = curr_here
    print(mini)
def C():
    print()


def main():
    t = int(input())
    while(t>0):
        B()  
        t=t-1

if __name__=="__main__": 
    main()       

