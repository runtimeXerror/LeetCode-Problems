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
    ListNode* deleteMiddle(ListNode* head) {
        //for single node ke liyee
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        //find size of LL
        int n=0;
        ListNode*temp = head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        //finde middle index
        int mid = n/2;
        //traverse the node from start to (mid-1)
        temp = head;
        for(int i=0; i<mid-1; i++){
            temp = temp -> next;
        }
        //delete  the node
        temp->next=temp->next->next;
        return head;
    }
};