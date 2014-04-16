/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
		using namespace std;
		map <ListNode *, char> check;
		while (head) {
			//if (check.find(head) == check.end())
			if (!check[head])
				check[head] = 'i';
			else
				return true;			
		head = head -> next;
		}
		return false;
	}
};
