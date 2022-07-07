/*
simple bubble sort is applied. In case you want the 
time compexcity to be less you can use other sorts too.

*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               int temp= arr[j];
               arr[j]= arr[j+1];
               arr[j+1]= temp;
           }
       }
   }
}

//without any sorting algo

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int t,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>y;
        arr.push_back(y);
    }
    int c1=0,c2=0;
    for(int i=0;i<t;i++){        
        if(arr[i]==0){
            c1++;
        }
        else if(arr[i]==1){
            c2++;
        }
    }
    for(int i=0;i<c1;i++){
        arr[i]=0;
    }
    for(int i=c1;i<(c1+c2);i++){
        arr[i]=1;
    }
    for(int i=(c1+c2);i<t;i++){
        arr[i]=2;
    }

    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }

    return 0;        
}


//the code can be further optimised.
