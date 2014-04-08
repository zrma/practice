class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        D={}
        for i in A:
            if i in D.keys():
				del D[i]
            else:
                D[i] = 1
        for k in D:
            if D[k] == 1:
                return k
a=[5,3,7,3,5]
s =Solution();
print s.singleNumber(a)
