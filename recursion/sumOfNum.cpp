//calculating sum of n number using recursion by => perameterized

#include<iostream>
using namespace std;
void calSum(int n,int sum){    //3,0 / 2,3 / 1,5 / 0,6
    if(n<1) {                   //
    cout<<sum;                  //
    return ;
    }                          // cout<<sum<<" ";
    calSum(n-1,sum+n);         // 2 ,3 / 1,5 /0 6
}

int calculateSum(int n){
    if(n<1)return 0;
    return n+calculateSum(n-1);
}
int main(){
    int num;   //3
    cin>>num;    //3
    int sum=0;   //0
    // calSum(num,sum);  //3,0
    cout<<"sum is "<<calculateSum(num);
    return 0;
}