

#include<bits/stdc++.h>
using namespace std;

bool containsduplicate(vector<int> nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<(int)nums.size();i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> nums {1, 2, 3, 1};
    
    bool ans=containsduplicate(nums);

    if(ans==1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}