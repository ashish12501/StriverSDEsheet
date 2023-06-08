#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    //  Write your code here.
    int bp=-1;
    for(int i = n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            bp=i;
            break;
        }
    }
    
    if(bp== -1){
        reverse(a.begin(),a.end());
        return a;
    }

    for(int i=n-1;i>=bp;i--){
        if(a[i]>a[bp]){
            swap(a[i],a[bp]);
            break;
        }
    }

    reverse(a.begin()+bp+1,a.end());
    return a;
}