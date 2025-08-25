#include<bits/stdc++.h>
using namespace std;

bool containsduplicate(vector<int> num){
    unordered_set<int> set;

    for(int i=0;i<num.size();i++){
        set.insert(num[i]);
    }
    
    if(set.size()<num.size()){
        return true;
    }
    return false;
}
int main(){
    vector<int> num={1,2,3,1};

    bool res = containsduplicate(num);

    if(res=1){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}