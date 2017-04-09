mod=10

def power(x,y,mod):
	if y==0: return x and 1
	if y==1: return x % mod
	if y % 2 == 0:
		half=(power(x,y//2,mod))%mod
		return (half*half)%mod
	return (x*power(x,y-1,mod))%mod


t=int(input())

for i in range(0,t):
	x,y=map(int,input().split())
	x%=mod
	print(power(x,y,mod)%mod)
