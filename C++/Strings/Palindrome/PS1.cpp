//O(log10N + 1) Time complexity

#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int num){
    int revNum=0;
    int temp=num;
    while(num>0){
        int ld=num%10;
        revNum=(revNum*10)+ld;
        num=num/10;
    }
    if(temp==revNum){
        return true;
    }else{
        return false;
    }

}
int main(){
    int num=4554;
    bool ans=ispalindrome(num);
    if(ans==true){
        cout<<num <<" is a palindrome."<<endl;
    }else{
        cout<<num<<" is not a palindrome."<<endl;
    }
    return 0;
}