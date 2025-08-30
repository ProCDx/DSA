//o(n) time complexity
#include<bits/stdc++.h>
using namespace std;
string twosum(vector<int> &arr,int target){
        unordered_set<int,int> mpp;

        for(int i=0;i<(int)arr.size();i++){
            int num=arr[i];
            int complement=target-num;
            if(mpp.find(complement)!=mpp.end()){
                return "Yes";
            }
        }
        return "No";
}
int main(){
    vector<int> arr{2, 6, 5, 8, 11};
    int target=14;
    string ans=twosum(arr,target);
    cout<<"The answer for variant two : "<<ans<<endl;
    return 0;
}
