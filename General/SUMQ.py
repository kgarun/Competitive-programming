import bisect
 
 
for T in range(0,int(input())):
	p,q,r=map(int,input().split())
	x=list(map(int,input().split()))
	Y=list(map(int,input().split()))
	z=list(map(int,input().split()))
 
	x.sort()
	z.sort()
 
	xsum=[0]
	zsum=[0]
 
	for i in range(0,p):xsum.append(xsum[i]+x[i])
	for i in range(0,r):zsum.append(zsum[i]+z[i])
 
	ans=0
 
	for y in Y:
		xsize=bisect.bisect_right(x,y, lo=0, hi=len(x))
		zsize=bisect.bisect_right(z,y, lo=0, hi=len(z))
		if xsize>0 and zsize>0:
			ans+=((zsum[zsize]*xsum[xsize])+(xsize*zsize*y*y)+(xsum[xsize]*zsize*y)+(zsum[zsize]*xsize*y))
	print(ans%1000000007)
 
