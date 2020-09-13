def permutationEquation(p):
    result=[]
    l=len(p)
    
    for i in range(1,l+1):
        for j in p:
            if(i==j):
                r=p.index(i)+1
        for j in p:        
            if(r==j):
                ind=p.index(r)+1
                result.append(ind)
        
        
    return result
