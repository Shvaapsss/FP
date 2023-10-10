#include <iostream>
using namespace std;
int main() {
    const int size=5;
    int a[size];
    for (int i=0;i<size;i++) {
        cin>>a[i];
    }
    cout<<"1:"<<endl;
    for (int i=0;i<size;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int pos_i=size-1;
    int neg_i=0;

    while (neg_i<=pos_i) {
        if (a[pos_i] < 0) {
            swap(a[neg_i], a[pos_i]);
            neg_i++;
        } else {
            pos_i--;
        }
    }
    cout<<"2:"<<endl;
    for(int i=0;i<size;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//
// Created by nicki on 10/10/2023.
//
//
// Created by nicki on 10/10/2023.
//
