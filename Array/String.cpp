#include<iostream>
using namespace std;

void reverseString(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int lengthString(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;
    //name[2] = '\0';
    cout<<"Your name is "<<endl;
    cout<<name<<endl;
    int len = lengthString(name);
    cout<<"Length: "<<len<<endl;
    reverseString(name,len);
    cout<<name;
    return 0;
}