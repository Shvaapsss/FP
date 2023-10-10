#include <iostream>
using namespace std;
int main() {
    const int size = 100;
    int a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int negativeNumbers[size];
    int positiveNumbers[size];
    int negIndex = 0;
    int posIndex = 0;

    cout << "1:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
        if (a[i] < 0) {
            negativeNumbers[negIndex] = a[i];
            negIndex++;
        } else {
            positiveNumbers[posIndex] = a[i];
            posIndex++;
        }
    }
    cout << endl;

    int index = 0;
    for (int i = 0; i < negIndex; i++) {
        a[index] = negativeNumbers[i];
        index++;
    }

    for (int i = 0; i < posIndex; i++) {
        a[index] = positiveNumbers[i];
        index++;
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
