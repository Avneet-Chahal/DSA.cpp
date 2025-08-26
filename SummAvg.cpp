//   Sum and average of array elements

#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    int average=0;
    for(int i=0;i<size;i++){
        sum+=i;
        average=sum/size;
    }
    cout<<sum<<endl;
    cout<<average<<endl;
}
int main(){
    int arr[]={2,5,4,7,9,1,3};
    int size=7;
    sum(arr,size);
}