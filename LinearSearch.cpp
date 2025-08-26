// write a program to find a number using linear search by using function
#include <iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[100];
    int size;
    cin>>size;
    int key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cin>>key;
    int result=linearSearch(arr,size,key);
    if(result!=-1){
        cout<<"Element found at:"<<result<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}