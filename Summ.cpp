//    Sum of all numbers in array


#include<iostream>
using namespace std;
int sumArr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        
    }
    return sum;
    
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    cout<<sumArr(arr,size)<<endl;

}