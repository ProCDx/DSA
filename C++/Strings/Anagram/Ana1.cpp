//O(n log n)- time complexity
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(const string& s,const string& t){
    if(s.size()!=t.size()) return false;
    string s1=s,t1=t;
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    return s1 == t1;
}
int main(){
    string s = "eat" , t = "tea";
    bool ans=isAnagram(s,t);
    if(ans==true){
        cout<<s<<" and "<<t<<" are Anagrams";
    }else{
        cout<<s<<" and "<<t<<" are no Anagrams";
    }
    return 0;
}