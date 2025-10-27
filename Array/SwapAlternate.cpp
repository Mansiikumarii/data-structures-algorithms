#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6]= {9,3,6,12,4,32};
    int odd[9]={9,3,6,12,4,32,5,11,19};
    swapAlternate(even,6);
    printArray(even,6);

    cout<<endl;
    swapAlternate(odd,9);
    printArray(odd,9);
    return 0;1

}