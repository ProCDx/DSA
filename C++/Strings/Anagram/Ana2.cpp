#include<bits/stdc++.h>
using namespace std;
bool isAnagram(const string&s,const string& t){
    if(s.size()!=t.size()) return false;
    vector<int> count(26,0);
    for(int i=0;i<(int)s.size();i++){
        count[s[i] -'a']++;
        count[t[i] -'a']--;
    }
    for (int x:count){
        if(x!=0)return false;
    }
    return true;
}
int main(){
    string s="dog",t="god";
    bool ans=isAnagram(s,t);
    if(ans==true){
        cout<<s<<" and "<<t<<" are  Anagram"<<endl;
    }else{
        cout<<s<<" and "<<t<<" are not Anagram"<<endl;
    }
    return 0;
}