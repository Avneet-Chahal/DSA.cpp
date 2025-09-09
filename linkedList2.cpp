// to get input from user

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    // creating nodes in heap memory
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    
    // assigning data
    cout<<"Enter data at first node: "<<endl;
    cin>>head->data;
    cout<<"Enter data at second node: "<<endl;
    cin>>second->data;
    cout<<"Enter data at third node: "<<endl;
    cin>>third->data;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    Node*temp=head;
    cout<<"Linkedlist: ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}