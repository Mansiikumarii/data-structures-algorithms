#include<iostream>
using namespace std;

int main(){
    int a, b=1;
    a= 10;
    if(++a)
    cout<<b;
    else
    cout<<++b;

    //a=10 , b=1
    // a is incremented to 11, which is true, so it prints b
    // Output: 1
    
}