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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=new  ListNode;
        ListNode* q=new  ListNode;
        p=q=head;
        int i {0};
        while(p!=NULL)
        {
            p=p->next;
            i++;
        }
        int j {0};
        int k=i/2;
        if(i%2!=0){
            while(j<k)
            {
                q=q->next;
                j++;
            }
        }
        else if(i%2==0){
                while(j<k)
                {
                   q=q->next;
                    j++;
                }
            }
        return q;
    }
};