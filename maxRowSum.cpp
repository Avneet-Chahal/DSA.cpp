#include <iostream>
#include<vector>
using namespace std;

void rowWithMaxSum(vector<int> sumOfRowsVector){
    int max=sumOfRowsVector[0];
    int index=0;
    for(int i=1;i<sumOfRowsVector.size();i++){
        if(sumOfRowsVector[i]>max){
            max=sumOfRowsVector[i];
            index=i;
        }
    }
    cout<<"Row number"<<index+1 <<"has the maximum sum and the max sum of the rows is:"<<max;
}