#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ReverseArray(vector<int>& arr){
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    ReverseArray(arr);
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}