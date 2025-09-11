#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool>  kidswithcandies(vector<int> &candies,int extracandies){
    int mx=*max_element(candies.begin(),candies.end());

    vector<bool> ans;
    ans.reserve(candies.size());

    for(int c:candies){
        ans.push_back(c+extracandies>=mx);
    }
    return ans;
}
int main(){
    vector<int> candies={5,2,1,1,2};
    int extracandies=3;
    vector<bool> ans=kidswithcandies(candies,extracandies);
    for(bool b: ans){
        cout<<(b?" true":" false");
    }
    cout<<endl;
    return 0;
}