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

Node * insertBeg(Node * head, int x){
    Node * temp = new Node(x);
    temp->next = head;
    return temp;
}
int main(){
    Node * head = NULL;
    head = insertBeg(head,30);
    head = insertBeg(head,20);
    head = insertBeg(head,10);
    return 0;
}