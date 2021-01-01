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

Node *delHeadNaive(Node * head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node * curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
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
int main(){

    Node * head = new Node(10);
    Node * temp1  = new Node(20);
    Node * temp2  = new Node(30);
    head->next = temp1;
    temp1->nezxt = temp2;
    temp2->next = head;
    Node * newHead = delHeadEfficient(head);
    return 0;
}
