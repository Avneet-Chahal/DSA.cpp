//   swap max and min number of any array

#include<iostream>
using namespace std;
void Solve(int arr[],int size){
    int maxx=arr[0];
    int minn=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
        if(arr[i]<minn){
            minn=arr[i];
        }
    }
    int temp=maxx;
    maxx=minn;
    minn=temp;
cout<<maxx<<endl;
cout<<minn<<endl;    

}
int main(){
    int arr[]={2,4,7,8,1,5,3};
    int size=7;
    Solve(arr,size);
}