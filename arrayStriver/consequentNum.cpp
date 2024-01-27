//consecutive number print

#include<iostream>

using namespace std;
void number(int arr[],int n){
    int count=0;
    int ans=0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            if(count>ans)  //aapna logic hai
            ans=count;
        }else{
            count=0;
        }
    }
    cout<<ans;
}
int main(){
    int arr[]={1,1,0,0,1,1,1,1,1,1};
    number(arr,10);
    return 0;
}