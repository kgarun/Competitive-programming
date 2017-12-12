t=int(input())
 
for i in range(t):
	r,b,p=map(int,input().split())
	q=r+b-p
	tot=r+b
	r=r*p
	b=b*q
	r=r+b
	ans=r/tot
	print("{0:.10f}".format(round(ans,10)))
	#print("%.10f" % r/tot) 
 
