#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int target,int size){
    int left =0;
    int right=size-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

    }
    return -1;

}

int main(){
    cout<<"size:"<<endl;
    int size;
    cin>>size;

    cout<<"target:"<<endl;
    int target;
    cin>>target;

    int arr[size];
    cout<<"input array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }

    int result=binarysearch(arr,target,size);

    if(result != -1){
        cout<<"element found at"<<result<<endl;
    }
    else{
        cout<<"element not found";
    }
     return 0;
}