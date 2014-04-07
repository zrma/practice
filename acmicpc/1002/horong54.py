from math import pow
 
class tr:
    def __init__(self, x, y, r):
        self.x = x
        self.y = y
        self.r = r
 
def check(t1, t2):    
    rsum = pow(t1.r + t2.r, 2);
    rsub = pow(t1.r - t2.r, 2);
    dist = pow(t2.x - t1.x, 2) + pow(t2.y - t1.y, 2)
    if dist == 0:
        if t1.r == t2.r:
            return -1
        else:
            return 0 
    elif dist == rsum or dist == rsub:
        return 1
    elif rsub < dist and dist < rsum:
        return 2
    else:
        return 0
 
n = input()
plist = []
for i in range(0,n):
    plist.append(map(int,raw_input().split(" ")))
 
for num in plist:
    t1 = tr(num[0], num[1], num[2]);
    t2 = tr(num[3], num[4], num[5]);
    print check(t1, t2)