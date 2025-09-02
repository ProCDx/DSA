//O(n^2) time complexity
#include<bits/stdc++.h>
using namespace std;

bool containsduplicate(vector<int> nums){

    for(int i=0;i<(int)nums.size();i++){
        for(int j=i+1;j<(int)nums.size();j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> nums {1, 2, 3, 1};

    bool ans=containsduplicate(nums);
    if(ans==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}