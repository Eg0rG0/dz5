#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <random>
#include "condition.h"]

using namespace std;

double* Array(int n) {
    return new double[n];
}
void ArrayCompl(double* arr, int n) {
    for (int i = 0; i < n; ++i) {
        int k;
        k = rand();
        arr[i] = k;
    }
}
void ArrayCout(double* arr, int n) {
    cout << "Array : ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void StorageDelete(double* arr) {
    delete []arr;

}
