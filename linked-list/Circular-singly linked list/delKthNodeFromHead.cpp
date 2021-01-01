#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node * next;
    Node * prev;
    Node ( int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
}
Node * delHeadEfficient( Node * head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node * temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

Node * delKth( Node * head, int k){
    if(head == NULL) return head;
    if(k == 1){
        return delHeadEfficient(head);
    }
    Node * curr = head;
    for(int i = 0; i<k-2; ++i){
        curr = curr->next;
    }
    Node * temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
int main(){

    Node * head = new Node(10);
    Node * temp1  = new Node(20);
    Node * temp2  = new Node(30);
    head->next = temp1;
    temp1->nezxt = temp2;
    temp2->next = head;
    Node * newHead = delKth(head,2);
    return 0;
}
