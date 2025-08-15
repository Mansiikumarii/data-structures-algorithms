#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"src: "<<src<<" dest: "<<dest<<endl;
    if(src == dest){ //Base case
        cout<<"Pahuch gayii mommy"<<endl;
        cout<<endl;
        return;
    }
    src++; //process

    reachHome(src, dest); //Recursive call
}
int main(){
    int dest =10;
    int src = 0;
    cout<<endl;
    reachHome(src, dest);
    return 0;
}