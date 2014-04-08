public class Solution {
	public int singleNumber(int[] A) {
		int i, sum;
		for (i = 1, sum = A[0]; i < A.length ; i++) 
			sum ^= A[i];
		return sum;
	}

	public static void main(String[] args) {
		int[] x = {5, 3, 6, 3, 6};
		Solution s = new Solution();
		System.out.println(s.singleNumber(x) == 5);
	}	
}
