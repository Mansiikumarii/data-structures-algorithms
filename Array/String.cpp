#include<iostream>
using namespace std;
char tolowerCase(char ch){
    if(ch >= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[], int n){
    int s=0;
    int e= n-1;

    while (s <= e)
    {
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char arr[], int n){
    int s=0, e = n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int getLength(char arr[]){
    int count=0;
    for(int i=0; arr[i] != '\0'; i++ ){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    int len = getLength(name);
    cout<<"Length "<<len<<endl;

     reverse(name, len);
     cout<<"Your name is ";
     cout<<name<<endl;

     cout<<"Palindrome or Not "<<checkPalindrome(name, len)<<endl;

     cout<<"CHARACTER is "<<tolowerCase('B')<<endl;

    return 0;
}