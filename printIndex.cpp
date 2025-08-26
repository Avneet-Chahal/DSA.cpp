// print index of smallest and largest value --->

#include<iostream>
using namespace std;
int main(){
    int marks[]={99,100,54,36,88};
    int size=5;
    int small=marks[0];
    int small_indx=0;
    for(int i=1;i<size;i++){
        if(marks[i]<small){
            small=marks[i];
            small_indx=i;
        }
    }
    cout<<small_indx<<endl;
}