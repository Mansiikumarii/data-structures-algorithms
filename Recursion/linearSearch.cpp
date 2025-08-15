#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array "<<n<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false; // base case: if size is 0, key is not found
    }
    if(arr[0] == key){
        return true;
    }
    else{
        int remaningPart = linearSearch(arr+1, size-1, key); // recursive call with the rest of the array
        return remaningPart; // return the result of the recursive call
    }
}
int main(){
    int arr[5] = {10, 8, 30, 4, 5};
    int size = 5;
    int key = 5;
    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout << "Key is present"<<endl;
    }
    else{
        cout<< "Key is not present"<<endl;
    }
    print(arr, size);
    return 0;
}