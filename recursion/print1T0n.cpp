//printing number 1 to given number using recursion

#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n)
    return ;
    cout<<i<<" ";
    print(i+1,n);
    
}
int main(){
    int num;
    cin>>num;
    int i=0;
    print(i+1,num);
    return 0;
}