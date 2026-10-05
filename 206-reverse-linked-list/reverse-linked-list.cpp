/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp = head;
        vector<int> ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int n = ans.size();
        int k = n-1;
        while(temp!=NULL){
            temp->val = ans[k];
            k--;
            temp = temp->next;
        }
        return head;
    }

};