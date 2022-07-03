#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void traverse(struct Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

struct Node* enter_ll(){
    struct Node* temp = NULL;
    struct Node* head = NULL;
    cout<<"Enter data of linked list.Enter -1 to stop"<<endl;
    int input,c=0;
    while(input!=-1){
        cin>>input;
        if(input==-1){
            break;
        }
        struct Node* new_node = new Node;
        new_node->next=NULL;
        new_node->data=input;
        if(c==0){
            head = new_node;
        }
        else{
            temp->next = new_node;
        }
        temp=new_node;
        c++;
    }
    return head;
}

int main(){

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = new Node;
    second = new Node;
    third = new Node;
    head->data = 1;
    second->data = 2;
    third->data = 3;
    head->next = second;
    second->next = third;
    third->next = NULL;
    struct Node* head2 = new Node;
    head2 = enter_ll();
    traverse(head2);
    return 0;
}