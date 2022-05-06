#include <iostream>
#include "condition.h"

using namespace std;

int main()
{
    string choice;
    choice = "Yes";
    int n;
    cout << "Enter the number of array elements" << endl;
    cin >> n;
    while (choice == "Yes" or choice == "YES" or choice == "yes") {
        int sum;
        double* arr;
        arr = Array(n);
        ArrayCompl(arr, n);
        ArrayCout(arr, n);
        StorageDelete(arr);
        cout << "Do you want to continue?" << endl;
        string newchoice;
        cin >> newchoice;
        if (newchoice == "Yes" or newchoice == "YES" or newchoice == "yes")
            cin >> n;
        choice = newchoice;
        if (newchoice == "no" or newchoice == "No" or newchoice == "NO") {
            return 0;
        }
    }
}