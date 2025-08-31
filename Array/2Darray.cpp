#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col ){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
//to print row wise sum
void printSum(int arr[][3], int row, int col){
    cout<<"Printing Sum -> "<<endl;
    for(int row=0; row<3; row++){
         int sum=0;
         for(int col =0; col<3; col++){
            sum += arr[row][col];

    }
    cout<<sum<<" ";
    }
    cout<<endl; 
}
//print col wise sum
void printColSum(int arr[][3], int row, int col){
    cout<<"Printing Sum ->"<<endl;
    for(int col=0; col<3;col++){
        int sum=0;
        for (int row = 0; row < 3; row++)
        {
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
    }
}

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int num = -1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        if(sum>maxi)
        maxi = sum;
    }
    cout<<"The maximum sum is "<<maxi<<endl;
}
int main(){
    int arr[3][3];

    //taking input
    cout<<"Enter the elements "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    //print
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;
    if(isPresent(arr, target, 3,3)){
        cout<<"Element is found";
    }
    else{
        cout<<"Not found";
    }

    printSum(arr, 3, 3);
    printColSum(arr,3,3);
    return 0;
}