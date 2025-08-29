#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] = {1,2,3,4};
    cout<<"Enter the element you seaech for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";
    }
}