#include <bits/stdc++.h>
using namespace std;

int ispalindrome(string &s){
    
    int left=0;
    int right=s.length()-1;

    while(left<right){
        if(s[right]!=s[left]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    string s="abba";
    cout<<ispalindrome(s) <<endl;
    return 0;
}