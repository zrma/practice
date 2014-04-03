n=input()

def mypow (a,b):
	r = 1
	for i in range(b):
		r = r * a % 10
	return r % 10


for i in range(n):
	ws = raw_input().split(" ")
	a = int(ws[0])
	b = int(ws[1])
	print mypow(a,b) 
