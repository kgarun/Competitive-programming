T=int(input())
for t in range(1,T+1):
	R,p=map(int,input().split())
	l=1
	r=p
	a=(int)(((R+1)**2-R**2))
	s=0
	mid=0
	while l<=r:
		mid=(l+r)>>1
		s=((2*a+(mid-1)*4)*mid)>>1
		if(s<=p and s+4>p):break
		elif s>p:r=mid-1
		else:l=mid+1
	if s>p:mid-=1
	print("Case #",end="")
	print(t,end="")
	print(":",mid)
	