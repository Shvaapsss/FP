#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int j;
    for(int f=0;f<n;f++) {
        cin>>a[f];
    }
    for(int i=0;i<(n/2);i++){
        j=n-i-1;
        swap(a[i], a[j]);
    }
    for(int k=0;k<n;k++) {
        cout << a[k]<<" ";
    }
    return 0;
}
//
// Created by nicki on 10/19/2023.
//
