//  To print unique values in array

#include<iostream>
using namespace std;
void printUnique(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
        cout<<arr[i]<<endl;  
    }
    }

    
}
int main(){
    int arr[]={2,4,6,2,6,3,2,9,6};
    int size=9;
    printUnique(arr,size);
}