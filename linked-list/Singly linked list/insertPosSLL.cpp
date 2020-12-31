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
Node * insertPos(Node * head, int data, int pos){

    Node * temp = new Node(data);
    if(pos == 1){
        temp->next = head;
        return temp ;
    }
    Node * curr = head
    for(int i =1; i<= pos-2 && curr!=NULL; ++i){
        curr = curr->next
    }
    if(curr==NULL){
        return head ;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;

}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    Node *newHead = insertPos(head, 100, 2);
    return 0;
}