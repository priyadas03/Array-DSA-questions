#include <bits/stdc++.h>
using namespace std;

int swapalternate(int arr[],int n){
   
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
        }
        

    }

}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    swapalternate(arr,n);
    printarray(arr,n);
}