import math
def mypow(a,b):
	MAX = 1000
	if a == 1 or b == 0:
		return 1
	elif b > MAX:
		b1 = int(math.sqrt(b))
		b2 = b - b1 * b1
		return int(mypow(mypow(a,b1),b1)*pow(a,b2) % 10)
	else:
		return int(pow(a,b) % 10)

n=input()
for i in range(n):
	ws = raw_input().split(" ")
	a = int(ws[0])
	b = int(ws[1])
	print mypow(a,b)
