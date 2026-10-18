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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(head == nullptr)
            return nullptr;

        ListNode* temp = head;
        ListNode* fast = head;

        for(int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        // The node to remove is the head
        if(fast == nullptr)
        {
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }

        while(fast != NULL)
        {
            if(fast->next == NULL)
            {
                ListNode* todelete = temp->next;
                temp->next = temp->next->next;
                delete todelete;

                return head;
            }
            fast = fast->next;
            temp = temp->next;
        }

        return head;
    }
};