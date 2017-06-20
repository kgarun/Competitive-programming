T=int(input())
for t in range(T):
	u,v=map(int,input().split())
	s=u+v
	s+=1
	ans=(s*(s-1))//2
	ans+=u+1
	print(ans) 
