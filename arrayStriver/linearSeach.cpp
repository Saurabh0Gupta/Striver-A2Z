//linear search array

#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
    int check=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            check=i;
            break;
        }
    }
    if(check!=0){
        cout<<"mil gya "<<arr[check];
    }else{
        cout<<"nhi mila bhai";
    }
}
int main(){
    int arr[]={1,2,4,2,6,5,7,3};
    linearSearch(arr,8,7);
    return 1;
}