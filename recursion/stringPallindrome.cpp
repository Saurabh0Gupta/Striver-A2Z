//check wheater the given string is pallindrome or not
#include<iostream>
using namespace std;
bool checkPalin(string &str,int i){
    if(i>=str.size()/2)
    return true;
    if(str[i]!=str[str.size()-i-1])
    return false;
    return checkPalin(str,i+1);
}
int main(){
    string str="madaam";
    int ans=checkPalin(str,0);
    if(ans)
    cout<<"yes palindrome";
    else
    cout<<"not palindreom";
    return 0;
}