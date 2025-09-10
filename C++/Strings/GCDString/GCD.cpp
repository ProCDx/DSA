#include<iostream>
#include<numeric>
using namespace std;
string GcdCheck(const string &str1,const string &str2){
    if(str1+str2!=str2+str1) return "";
    int g=gcd(str1.size(),str2.size());
    return str1.substr(0,g);
}

int main(){
    string str1="abc";
    string str2="abcabc";
    string gcd=GcdCheck(str1,str2);
    cout<<" Gcd of two strings : "<<gcd<<endl;
}