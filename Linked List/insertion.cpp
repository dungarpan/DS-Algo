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

void insert_beginning(struct Node* head){

}

void insert_middle(struct Node* head){

}

void insert_end(struct Node* head){

}

int main(){
    int choice,data;
    struct Node* head = new Node; 
    struct Node* second = new Node; 
    struct Node* third = new Node; 
    head->data = 1;
    second->data = 2;
    third->data = 3;
    head->next = second;
    second->next = third;
    third->next = NULL;
    cout<<"input 1 to add the element at the beginning of the list"<<endl;
    cout<<"input 2 to add the element at the middle of the list"<<endl;
    cout<<"input 3 to add the element at the end of the list"<<endl;
    cin>>choice;
    cout<<"Linked list before inserion"<<endl;
    traverse(head);
    cout<<"Enter data for the new node"<<endl;
    cin>>data;
    if(choice==1){
        
    }
    else if(choice==2){

    }
    else{
        
    }
    return 0;
}