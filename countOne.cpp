#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count1(int a[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        int curr=0;
        for(int j=i; j<n; j++){
            if(a[j]==1){
                curr++;
            }else{ break; }
        }
        res=max(res,curr);
    }
    return res;
}
int main(){
    int a[]={1,0,1,1,1,1,0,1,1};
    cout<<count1(a,9)<<endl;
    return 0;
}