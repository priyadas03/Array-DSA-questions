#include <bits/stdc++.h>
using namespace std;
bool lsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
           return 1;
        }
        
    }
    return 0;

}
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int key;
    cout<<"enter key:";
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    lsearch(arr,n,key)? cout<<"key is found"<<endl : cout<<"key is not found"<<endl;

}