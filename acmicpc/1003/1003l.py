count1 = 0
count0 = 0
def fact_count(n):
	global count0, count1
	if n == 0:
		count0 +=1
	elif n == 1:
		count1 +=1
	else :
		fact_count(n-1)
		fact_count(n-2)


n=input()
for i in range(n):
	x=input()
	count1 = count0 = 0
	fact_count(x)
	print count0, count1
