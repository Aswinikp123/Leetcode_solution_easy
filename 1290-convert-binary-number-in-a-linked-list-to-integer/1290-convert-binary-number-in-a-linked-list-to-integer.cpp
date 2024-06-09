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
    int getDecimalValue(ListNode* head) {
        ListNode* p=new ListNode;
        p=head;
        int n;
        int i {0};
        int j;
        int result {0};
        int res1 {0};
    while(p!=NULL)
    {
        res1=result<<1;
        if(p->next!=NULL)  
        {     
                n=p->val;
                p=p->next;
                result=res1+n;
                
        }
        else{
            n=p->val;
            p=p->next;
            result=res1+n;
        }
    }
    return result;
}
};