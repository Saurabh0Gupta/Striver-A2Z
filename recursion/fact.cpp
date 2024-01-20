//finding factorial number using recursion

#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<"factorial is "<<fact(num);
    return 0;

}