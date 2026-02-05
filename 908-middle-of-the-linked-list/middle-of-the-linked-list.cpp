
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*Slow=head;
        ListNode*Fast=head;
        while(Fast!=nullptr && Fast->next !=nullptr){
            Fast=Fast->next->next;
            Slow=Slow->next;
        }

        return Slow;
    }
};

        
    
