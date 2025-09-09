// to get both size and input from user

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
};
int main() {
    int n;
    cout<<"Enter the number of nodes to insert into the linkedlist";
    cin>>n;
    if(n<=0){
        cout<<"Linked list can not be created with size "<<n<<endl;
        return 0;
    }
    Node* head=NULL;
    Node* temp=NULL;
    for(int i=1;i<=n;i++){
            Node* newNode=new Node();
            cout<<"Enter the data for the node"<<i<<": ";
            cin>>newNode->data;
            newNode->next=NULL;
            if(head==NULL){
                head=newNode;
                temp=head;
            }else{
                temp->next=newNode;
                temp=newNode;
                
            }
            
        }
        cout<<"LinkedList: ";
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"Null "<<endl;
        
    
}