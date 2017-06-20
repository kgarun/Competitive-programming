for T in range(0,int(input())):
	n=int(input())
	a=map(int,input().split())
	posval=0
	possize=0
	neg=[]
	for element in a:
		if element>=0:
			posval+=element
			possize+=1
		else:
			neg.append(element)
	neg.sort(reverse=True)
	negval=0
	for val in neg:
		if (possize*posval)+(negval+val)<=((possize+1)*(posval+val))+negval:
			possize+=1
			posval+=val
		else:negval+=val
	print((possize*posval)+negval)
 
