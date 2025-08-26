//  find smallest number in array---->

#include<iostream>
using namespace std;
int main(){
    int marks[5]={99,100,54,36,88};
    int size=5;
    int small=marks[0];
    for(int i=0;i<size;i++){
        if(marks[i]<small){
            small=marks[i];
        }
    }
    cout<<small<<endl;

}