#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the array "<<endl;
    //printing the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
  int number[15];
  //accessing an array
  cout<<"Value at 15 index "<<number[14]<<endl;

  //initializing an array
  int second[3]={5,7,11};

  //accessing an element
  cout<<"Value at index 2 is "<<second[2]<<endl;

  int third[15] = {2,7};
  printArray(third,15);

  int fourth[10]={0};
 printArray(fourth,10);

 char ch[5] = { 'a','b','c','d','e'};
 cout<<"Character at index 3 is "<<ch[3]<<endl;
 for(int i=0; i<5; i++){
    cout<<ch[i]<<" ";
 }
 cout<<"printing DONE"<<endl;
  cout<<"Everthing is fine "<<endl;
  return 0;  
}