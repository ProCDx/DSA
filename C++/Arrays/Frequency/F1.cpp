#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int frequency(vector<int>& arr){
    unordered_map<int,int> freq;

    for(int num:arr){
        freq[num]++;
    }

    int maxfreq=0,ans=-1;
    for(auto& it:freq){
        if(it.second>maxfreq){
            maxfreq=it.second;
            ans=it.first;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1, 3, 2, 3, 4, 3, 5, 2, 2, 2};
    cout<<"The most frequent element: "<<frequency(arr)<<endl;
    return 0;
}