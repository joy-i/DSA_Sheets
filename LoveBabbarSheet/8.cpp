#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long max=0,c=0;
    for(int i=0;i<n;i++){
        c+=arr[i];
        if(c>max){
            max=c;
        }
        if(c<0){
            c=0;    
        }
    }
    return max;
    
}
