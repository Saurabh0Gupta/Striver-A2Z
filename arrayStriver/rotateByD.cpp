//left rotate an array by d number 
//1  2   3   4    5      d=21%5=>0
//3  4   5   1    2
//3 2 1 5 4
// 4 5 1 2 3
// #include<iostream>
// #include<vector>
// using namespace std;
// void leftRotate(int arr[],int n,int d){
//     if(d>n){
//         d=d%n;
//     }
//     vector<int> temp;
//     for(int i=0; i<d; i++){
//         temp.push_back(arr[i]);
//     }
//     // for(auto i=temp.begin(); i<temp.end(); i++){   //to print vector array
//     //     cout<<*i;
//     // }
//     for(int i=0; i<n-d; i++){
//         arr[i]=arr[i+d];
//     }
//     for(auto i=temp.begin(); i<temp.end(); i++){
//         arr[n-d+i]=*i;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int rotate=3;
//     leftRotate(arr,5,rotate);
//     return 0;
// }

#include<iostream>
using namespace std;
void leftRotate(int arr[],int n,int d){
    //for optimization purpose
    if(d==0 || n==1 || n==0)
    return;
    d=d%n;
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i];
        cout<<temp[i]<<" ";
    }
    for(int i=1; i<=n-d; i++){
        arr[i-0]=arr[n-d+i];   //5-3
        cout<<arr[i]<<" ";
    }
    for(int i=n-d; i<n; i++){  //5-3=2
        arr[i]=temp[i-(n-d)];    //2-0  3-1  4-2
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
//--------optiaml and easy to understandable approach---------------------
void reverse(int arr[],int l,int d){
        int r=d;
        while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
        }
}
void optmailTo(int arr[], int n, int d){
    reverse(arr,0,d-1);  //till d-1 reverse
    reverse(arr,d,n-1);  //till remaining
    reverse(arr,0,n-1);  //resultant array
}
int main(){
    int arr[]={1,2,3,4,5};
    // leftRotate(arr,5,3);
    optmailTo(arr,5,3);
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
    return 0;
}