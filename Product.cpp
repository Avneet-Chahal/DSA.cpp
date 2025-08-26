//  Product of array elements

#include<iostream>
using namespace std;
int productArr(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product=product*arr[i];
    }
    return product;
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    cout<<productArr(arr,size)<<endl;
}