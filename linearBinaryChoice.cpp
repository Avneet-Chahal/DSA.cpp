#include <iostream>
#include <string>
using namespace std;

bool check(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "Array is NOT sorted" << endl;
            return false;
        }
    }
    cout << "Array is sorted" << endl;
    return true;
}

void bin(int arr[], int n, int t) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == t) {
            cout <<mid << endl;
            return;
        } else if (arr[mid] < t)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << -1 << endl;
}

void lin(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int cont = 1;

    while (cont == 1) {
        cout << "Enter your choice of search (1 for binary,2 for linear): ";
        int choice;
        cin >> choice;

        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int t;
        cin >> t;

        switch (choice) {
            case 1:
                if (check(arr, n)) {
                    bin(arr, n, t);
                } else {
                    cout << -1 << endl;
                }
            break;

            case 2:
                if (check(arr, n)) {
                    lin(arr, n, t);
                } else {
                    cout << -1 << endl;
                }
            break;

            default:
                cout << -1 << endl;
        }

        cout << "Do you wish to continue? (Yes/No): ";
        cin >> cont;
    }


    return 0;
}