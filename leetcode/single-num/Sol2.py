class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        return reduce(lambda x, y: x ^ y, A)

# test
a = [1, 5, 5, 13, 1]
s = Solution()
print s.singleNumber(a)
