#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(vector<int>& arr){
    int n=arr.size();

    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    ReverseArray(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}