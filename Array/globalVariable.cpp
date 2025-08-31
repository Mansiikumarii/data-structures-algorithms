#include<iostream>
using namespace std;

int score = 15;
void a(int& i){
    char ch = 'a';
    cout<<i<<endl;
    cout<<score<<"in a"<<endl;
}
void b(int& i){
    cout<<i<<endl;
    cout<<score<<" in b "<<endl;
}
int main(){
    int i=5;
    cout<<score<<" in main "<<endl;
    a(i);
    b(i);
    return 0;
}