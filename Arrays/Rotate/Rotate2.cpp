#include<bits/stdc++.h>
using namespace std;
void RotateArr(vector<int>& arr,int d){
    int n=arr.size();
    
    d%=n;
    reverse(arr.begin(),arr.end());

    reverse(arr.begin(),arr.begin()+d);

    reverse(arr.begin()+d,arr.end());
}
int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
  	RotateArr(arr, d);
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}