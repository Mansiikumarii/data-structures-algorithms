#include<iostream>
using namespace std;
bool isPalindrome(char x[], int n){
    int start =0, end = n-1;
    while(start < end){
        if(x[start] != x[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
void reverseString(char s[], int n ){
    int start =0, end = n-1;
    while(start<end){
        swap(s[start++],s[end--]);
    }
}
int getLength(char s[]){
    int count =0;
    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[5];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length of your name is :"<<getLength(name)<<endl;
    cout<<"Reversed name is: ";
    reverseString(name,getLength(name));
    cout<<name << endl;
    cout<<"Is your name a palindrome ?"<< (isPalindrome(name,getLength(name)))<<endl;
    return 0;
}