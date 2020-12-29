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
Node * delTail(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next
    }
    delete(temp->next);
    temp->next = NULL;
    return head;
}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    Node * newHead = delTail(head);
    return 0;
}