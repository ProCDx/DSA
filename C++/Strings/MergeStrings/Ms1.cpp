// time complexity-O(n)
#include <iostream>
using namespace std;
#include<string>
class Solution {
public:
    string mergeAlternately(const string &word1,const string &word2) {
        string merged="";
        merged.reserve(word1.size()+word2.size());
        int i=0,j=0;

        while(i<word1.size() && j<word2.size()){
            merged +=word1[i++];
            merged +=word2[j++];
        }

        while(i<word1.size()) merged+=word1[i++];
        while(i<word2.size()) merged+=word2[i++];
        return merged;
}};

int main(){
    string word1="abc";
    string word2="kbcd";
    Solution s;
    string merged=s.mergeAlternately(word1,word2);
    cout<<"The merged string is: "<<merged<<endl;
    return 0;
    
}
