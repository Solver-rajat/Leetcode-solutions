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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* temp = head;
        int count = 0;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        temp = head;
        int mid = (count / 2) + 1;
        count = 1;

        while(temp->next != NULL)
        {
            count++;
            if(count == mid)
            {
                ListNode* todelete = temp->next;
                temp->next = todelete->next;
                delete todelete;

                return head;
            }

            temp = temp->next;
        }

        return head;
    }
};