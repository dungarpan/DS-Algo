#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int top;
    public:
        int arr[MAX];
        Stack(){ top = -1;}
        bool push(int a);
        int pop();
        bool isEmpty();
        void printStack();
};

bool Stack::push(int a){
    if(top==999){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
        arr[++top]=a;
        cout<<a<<" has been pushed into the stack\n";
        return true;
    }
}

int Stack::pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else{
        int x = arr[top--];
        return x;
    }
}

bool Stack::isEmpty(){
    if(top==-1){
        return true;
    }
    return false;
}

void Stack::printStack(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    class Stack s;
    int choice,num;
    while(choice!=5){
        cout<<"Enter your choice\n";
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Check empty"<<endl;
        cout<<"4.Print Stack"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"Enter the number to push\n";
                cin>>num;
                bool res1 = s.push(num);
                break;
            }
            case 2:
            {
                int res2 = s.pop();
                break;
            }
            case 3:
            {
                bool res3 = s.isEmpty();
                cout<<res3<<endl;
                break;
            }
            case 4:
            {
                s.printStack();
                break;
            }
            case 5:
                return 0;
        }
    }
    return 0;
}