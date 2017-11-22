f = [[0,1],[1,1]]
mod = 1000000007
def multiply(a,b):
    
    c = [[0,0],[0,0]]
    for i in range(0,2):
        for j in range(0,2):
            for k in range(0,2):
                c[i][j] += a[i][k]*b[k][j]
                c[i][j] %= mod
                
    return c

def matPow(mat,p):
    
    if p==1:
        return f
        
    if p&1:
        return multiply(matPow(mat,p-1),f)
        
    x = matPow(mat,p//2)
    return multiply(x,x)
    
for _ in range(int(input())):
    n = int(input())
    m = matPow(f,n+2)
    print(m[0][1]%mod)
    
    
