#include <iostream>
using namespace std;
int main(){
    const char *s="Loss and ddos";
    int count=0;
    while (*s !='\0') {
        if(*s == 's'){
            if(*(s+1) ==' ' or *(s+1) == '\0'){
                count++;
            }
        }
        s++;
    }
    cout<<count<<endl;
        return 0;
}
//
// Created by nicki on 11/9/2023.
//
