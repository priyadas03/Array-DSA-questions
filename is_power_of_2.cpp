#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){

    return (n>0) && ((n & (n-1))==0);
    
}

int main(){
    int n;
    cin>>n;
    isPowerOfTwo(n) ? cout<<"YES" <<endl : cout<<"NO"<<endl;

    return 0;
}