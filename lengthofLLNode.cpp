/* 
Length of a Linked List
Easy

Given a singly linked list node, return its length. The linked list has fields next and val.

Constraints
n ≤ 100,000 where n is the number of nodes in node 
*/




using namespace std;

class LLNode {
    public:
        int val;
         LLNode *next;
 };

int solve(LLNode* node) {
    int len = 1;
    if(!node){
        return 0;
    }
    while(node->next){
        node = node->next;
        len++;
    }
    return len;
    
}

/*
Recursive Approach
 int solve(LLNode* node) {
    if (!node) return 0;
    return 1 + solve(node->next);
    
} */