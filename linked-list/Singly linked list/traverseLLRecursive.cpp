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

void printNodesRecursive(Node *head){
    if(head ==  NULL){
        return;
    }
    cout<<head->data<<endl;
    return printNodesRecursive(head->next);
}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    printNodesRecursive(head);
    return 0;
}