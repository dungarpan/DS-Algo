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

struct Node* swap_pair(struct Node* head){
    if(head==NULL){
        traverse(head);
        return head;
    }
    int c=1;
    Node *temp = head;
    while(temp->next){
        temp=temp->next;
        c++;
    }
    if(c<=1){
        traverse(head);
        return head;
    }
    if(c==2){
        temp=head->next;
        temp->next=head;
        head->next=NULL;
        head=temp;
        traverse(head);
        return head;
    }
    else{
        int iter = (c/2)-1;
        Node *prev = head;
        Node *second = head;
        Node *third = head;
        Node *new_head = head;
        temp=head->next;
        second=temp->next;
        temp->next=head;
        head->next=second;
        new_head=temp;
        temp =temp->next;
        while(iter && temp->next && temp->next->next){
            cout<<"iter "<<iter<<endl;
            prev = temp;
            temp = temp->next;
            second = temp->next;
            if(iter!=1){
                third=second->next;
                prev->next=second;
                second->next=temp;
                temp->next=third;  
            }
            else{
                if(second->next){
                    third=second->next;
                    temp->next=third;
                    prev->next=second;
                    second->next=temp;
                }
                else{
                    prev->next=second;
                    second->next=temp;
                    temp->next=NULL;
                }
            }
            iter--;
        }
        traverse(new_head);
        return new_head;
    }
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data=4;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    struct Node* head2 = new Node;
    head2 = enter_ll();
    traverse(head2);
    cout<<"After swapping in pair"<<endl;
    head = swap_pair(head2);
    return 0;
}