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
int searchSLL(Node * head, int x){
    int pos =1;
    Node * curr = head;
    while(curr!= NULL){
        if(curr->data == x){
            return pos;
        }
        else
        {   pos++;
            curr = curr->next;
        }  
    }
    return -1;
}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    int positionOfElement = searchSLL(head, 30);
    return 0;
}
