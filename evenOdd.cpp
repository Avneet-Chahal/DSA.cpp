//  count even and odd numbers

#include<iostream>
using namespace std;
void Solve(int arr[],int size){
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_count+=1;
        }
        if(arr[i]%2!=0){
            odd_count+=1;

        }
    }
    cout<<even_count<<endl;
    cout<<odd_count<<endl;
}
int main(){
    int arr[]={2,5,9,7,2,4,6,1};
    int size=8;
    Solve(arr,size);
}