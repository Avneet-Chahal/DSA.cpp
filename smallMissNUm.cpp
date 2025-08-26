//10... Function to find the smallest missing number

#include<iostream>
using namespace std;
int findMissing(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        // If element at mid index is equal to index, missing number is on right
        if (arr[mid] == mid)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissing(arr, n);
    cout << "Smallest missing number is: " << missing << endl;

    return 0;
}