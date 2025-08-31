#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &arr,int target){
    unordered_map<int,int> mpp;

    for(int i=0;i<(int)arr.size();i++){
        int num=arr[i];
        int complement=target-num;
        if(mpp.find(complement) !=mpp.end()){
            return {mpp[complement],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
}

int main(){
    vector<int> arr {2, 6, 5, 8, 11};
    int target=14;
    vector<int> ans=twosum(arr,target);
    cout<<"The answer for variant 2 : " <<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}