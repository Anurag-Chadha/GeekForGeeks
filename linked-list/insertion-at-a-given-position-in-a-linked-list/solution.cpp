/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        if(head==nullptr){
            if(pos==1) return new Node(val);
            
        }
        if(pos==1){
            Node* n=new Node(val);
            n->next=head;
            return n;
        }
        int count=0;
        Node *temp= head;
        while(temp){
            count++;
            if(count==pos-1){
                Node* n=new Node(val);
                n->next=temp->next;
                temp->next=n;
                break;
            }
            temp=temp->next;
        }
        
        return head;
    }
};
