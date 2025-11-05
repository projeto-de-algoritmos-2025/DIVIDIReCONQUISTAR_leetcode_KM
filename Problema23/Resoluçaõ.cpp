#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
       
        return mergeKListsRecursive(lists, 0, lists.size() - 1);
    }

private:
    
    ListNode* mergeKListsRecursive(vector<ListNode*>& lists, int start, int end) {
        if (start == end) {
            return lists[start];
        }
        
        int mid = start + (end - start) / 2;
        
        ListNode* left = mergeKListsRecursive(lists, start, mid);
        ListNode* right = mergeKListsRecursive(lists, mid + 1, end);
    
        return mergeTwoLists(left, right);
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }

        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};