//printing 1 to given number using back tracking in backtracking we will write cout statement after the function call

#include<iostream>
using namespace  std;
void printf(int n){   //4  3  2  1  0
    if(n<1) return ;  //            0 ✅
    printf(n-1);     //3   2  1  0  
    cout<<n<<" ";
}
int main(){
    int num;  //4
    cin>>num;  //4
    printf(num);  //4
    return 0;
}