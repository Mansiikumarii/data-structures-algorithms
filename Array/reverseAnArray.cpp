#include <iostream>
#include<vector>
using namespace std;
 vector<int> reverse(vector<int>arr){
    int s=0, e= arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
 }
int main(){
    vector <int> arr= {5,4,3,2,1};
    vector<int> Solution = reverse(arr);
    for(int num: Solution){
        cout<<num<<" ";
    }
    cout<<endl;
        return 0;
}
