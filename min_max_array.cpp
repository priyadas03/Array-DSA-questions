#include <bits/stdc++.h>
using namespace std;


int maxi(int n,int arr[]){
    int max=INT_FAST16_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int mini(int n,int arr[]){
    int min=INT16_MAX;
    for (int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"maximum number is:"<<maxi(n,arr)<<endl;
cout<<"minimum number is :"<<mini(n,arr);
}

