#include<bits/stdc++.h>
using namespace std;

int ispalindrome(string &s){
    int l=s.length();
    for (int i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1])
            return 0;
    }
    return 1;
}
int main(){
    string s1="abba";
    cout<<ispalindrome(s1)<<endl;
    string s2="abc";
    cout<<ispalindrome(s2)<<endl;
    return 0;
}