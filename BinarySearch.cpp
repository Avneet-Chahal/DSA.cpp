// check the array is sorted or not and also find that the targeted element is found or not if found then return its index otherwise return -1

#include <iostream>
using namespace std;
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            cout << "Array is NOT sorted" << endl;
            return false;
        }
    }
    cout << "Array is sorted" << endl;
    return true;
}
int binarySearch(int arr[], int size, int x) {
    if (!isSorted(arr,size)) {
        return -1; 
    }
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid=start+(end - start)/2;  
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] > x) {
            end =mid - 1; 
        }
        else {
            start =mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    int x;
    cin >> x;
    int result= binarySearch(arr, size, x);
    if (result != -1)
        cout <<"Element found at index: " << result;
    else
        cout <<"Element not found";
    return 0;
}