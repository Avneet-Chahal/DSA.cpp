//  Stack 
//  A Stack is a linear data structure that follows the LIFO (last in first out).
//  The element inserted in last is the first element to be removed.
// Examples:
// Stack of plates

// Basic operations of Stack:
// push() : insert the element at the top.
// pop() : Remove the element from the top.
// peek() : Return the top element without removing.
// isEmpty() : Check if the Stack is empty o not.
// isFull() : is Stack full or not.


#include<iostream>
using namespace std;
#define MAX 5  // maximum size of the Stack

class Stack{
    int arr[MAX];
    int top;
public:
Stack(){top=-1;}
void push(int x){
    if(top==MAX-1){
        cout<<"Stack Overflow\n";
        return ;
    }
    arr[++top]=x;
    cout<<x<<" "<<"Pushed into the Stack\n";
}    
void pop(){
    if(top==-1){
        cout<<"Stack Underflow\n";
        return ;
    }
    cout<<arr[top--]<<" "<<"popped from the Stack\n";
}
int peek(){
    if(top==-1){
        cout<<"Stack is empty\n";
        return -1;
    }
    return arr[top];
}
bool isEmpty(){
    return top==-1;
}


};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Top Element is "<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<"Is Stack Empty ?"<<(st.isEmpty()? "Yes" : "No")<<endl;
    return 0;
}
