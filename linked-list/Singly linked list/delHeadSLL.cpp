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

Node * delHead(Node *head){
    if(head ==  NULL){
        return head;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    Node * newHead = delHead(head);
    return 0;
}