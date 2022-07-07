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
    for(int i=0;i<t-1;i++){
        for(int j=0; j<t-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}