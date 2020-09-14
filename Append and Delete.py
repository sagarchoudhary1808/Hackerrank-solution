#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the appendAndDelete function below.
def appendAndDelete(s, t, k):
    s=list(s)
    t=list(t)
    s_length=len(s)
    t_length=len(t)
    
    if s_length+t_length<=k: return "Yes"

    same=0

    for i in range(0,min(s_length,t_length)):
        
        if s[i]!=t[i]:
            break
            
        else:
            same+=1
    
    extra_s=s_length-same
    extra_t= t_length-same
    diff= extra_s +extra_t

    if(diff<=k and diff%2==k%2) or s_length + t_length <=k: return 'Yes'
    return 'No'
        
        

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
