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

Node * insertBegNaive( Node * head, int x){
    Node * temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
    }
    else{
        Node * curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

Node * insertBegEfficient(Node * head, int x){

    Node * temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head ;
    }
}
int main(){

    Node * head = new Node(10);
    Node * temp1  = new Node(20);
    Node * temp2  = new Node(30);
    head->next = temp1;
    temp1->nezxt = temp2;
    temp2->next = head;
    printCSLL(head);
    Node * newHead = insertBegEfficient(head, 100);
    return 0;
}
