//printing given number to 1 using recursion
#include<iostream>
using namespace std;
void printf(int n){
    if(n<1)return;
    cout<<n<<" ";
    printf(n-1);

}
int main(){
    int num;
    cin>>num;
    printf(num);
    return 0;
}