//general solution
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int t,y;
    cin>>t;
    int x=t/2;
    for(int i=0;i<t;i++){
        cin>>y;
        arr.push_back(y);
    }
    int min= arr[0], max= arr[0];

    for(int i=0;i<t;i++){
        if(arr[i]<=min){
            min= arr[i];
        }
        if(max<=arr[i]){
            max= arr[i];
        }
    }
    cout<<min+max;

    return 0;
}

//solution for code studio

int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    int y= min+max;    
    return y;
}
