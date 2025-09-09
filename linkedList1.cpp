// linked list is a linear data structure where elements(nodes) are stored in non contigous memory location
// each node contains data and a pointer(link) to the next node
// singly LL,doubly LL, circular LL

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
    head->data=10;
    second->data=20;
    third->data=30;
    
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