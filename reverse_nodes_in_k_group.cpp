
//This is my c++ solution for the problem reverse nodes in k group. It is a hard level problem in leetcode. 
//This is my one of the most effiecient solution for this question.
//hope you'll like it

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head||!head->next)return head;
        ListNode* temp = head;
        for(int i = 0; i < k; i++){
            if(!temp) return head;
            temp = temp->next;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nex = NULL;
        for(int i = 0; i < k; i++){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
