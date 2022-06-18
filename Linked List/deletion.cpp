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

struct Node* delete_data(struct Node* head, int d){
    struct Node* temp = new Node;
    struct Node* prev = new Node;
    temp = prev = head;
    if(head!= NULL && head->data == d){
        head = head->next;
        free(temp);
        return head;
    }
    else{
        while(temp->next != NULL && temp->data != d){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
        return head;
    }    
};

void delete_pos(struct Node* head, int d, int p){
    while(p-2 && (head->next)!=NULL){
        head = head->next;
        p--;
    }
    struct Node* new_node = new Node;
    new_node->data = d;
    new_node->next = head->next;
    head->next = new_node;
}

void delete_pointer(struct Node* head, int d){
    struct Node* last = new Node;
    while(head->next){
        head = head->next;
    }
    head->next = last;
    last->data = d;
    last->next = NULL;
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
    cout<<"input 1 to delete the first occurrence of that data in the list, given the data value of a node"<<endl;
    cout<<"input 2 to delete the node present at the given position in the list, given the position of a node"<<endl;
    cout<<"input 3 to delete the node, given a pointer to the node to be deleted,"<<endl;
    cin>>choice;
    cout<<"Linked list before deletion"<<endl;
    traverse(head);
    if(choice==1){
        int data;
        cout<<"Enter the data whose first occurence node is to be deleted"<<endl;
        cin>>data;
        head = delete_data(head, data);
    }
    else if(choice==2){
        int pos;
        cout<<"Enter position to enter the new node (greater than 1)"<<endl;
        cin>>pos;
        delete_pos(head, data, pos);
    }
    else{
        delete_pointer(head, data);
    }
    traverse(head);
    return 0;
}