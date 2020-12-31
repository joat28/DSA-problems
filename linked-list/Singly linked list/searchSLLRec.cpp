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
int searchSLLRec(Node * head, int x){
    int pos;
    if(head == NULL) return -1;
    if(head->data == x) return 1;
    int res = searchRec(head->next, x);
    if(res == -1){
        return -1;
    }
    else{
        return (res+1);
    }
}
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp->next = temp2;
    int positionOfElement = searchSLLRec(head, 30);
    cout<<positionOfElement<<endl;
    return 0;
}
