#include <iostream>
using namespace std;
int main(){
    int p;
    const char *s1="Sunny Autumn";
    const char *s2="Auto";
    while (*s1 && *s2 and *s1 == *s2){
        s1++;
        s2++;
    }
    p=*s1-*s2;
    cout<<p<<endl;
    return 0;
}
//
// Created by nicki on 11/9/2023.
//
