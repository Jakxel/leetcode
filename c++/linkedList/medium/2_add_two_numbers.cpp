/*
leetcode 2 - add two numbers
difficulty: medium
topic: linked list

description:
The algorithm adds two non-negative integers represented as linked lists,
where each node contains a single digit and the digits are stored in
reverse order. It traverses both lists simultaneously, adding the values
of corresponding nodes along with a carry from the previous addition.
A new linked list is constructed to store the result, digit by digit.
If a carry remains after processing all nodes, it is added as a new node.

approach:
iterative addition with carry using a dummy node

time complexity: O(max(n, m))
space complexity: O(max(n, m))
*/
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x):  val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        return dummy.next;
    }
};
