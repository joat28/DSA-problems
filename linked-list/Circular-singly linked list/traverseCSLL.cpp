#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node * next;
    Node ( int x){
        data = x;
        next = NULL;
    }
}

void printCSLL(Node * head){
    if(head == NULL) return;
    Node * p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p != head);
}
int main(){

    Node * head = new Node(10);
    Node * temp1  = new Node(20);
    Node * temp2  = new Node(30);
    head->next = temp1;
    temp1->nezxt = temp2;
    temp2->next = head;
    printCSLL(head);
    return 0;
}
