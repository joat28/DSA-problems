#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
}
Node * insertEnd(Node * head, int x ){
    Node * temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node * curr = head;
    while(curr!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
int main(){
    Node * head = NULL;
    head = insertEnd(head,30);
    head = insertEnd(head,20);
    head = insertEnd(head,10);
    return 0 ;
}