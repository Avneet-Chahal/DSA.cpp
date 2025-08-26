//  largest number in array---->

#include<iostream>
using namespace std;
int main(){
    int marks[]={99,100,54,36,88};
    int size=5;
    int largest=marks[0];
    for(int i=0;i<size;i++){
        if(marks[i]>largest){
            largest=marks[i];
        }
    }
    cout<<largest<<endl;
}