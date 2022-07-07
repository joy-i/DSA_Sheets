// swaping all the elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int t,temp=0,y;
    cin>>t;
    int x=t/2;
    for(int i=0;i<t;i++){
        cin>>y;
        arr.push_back(y);
    }
    
    for(int i=0, j=t-1;i<=x-1;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }    

    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


//coding ninja (not all the elements need to be swaped ATQ)
//there are two solutions 
// a

void reverseArray(vector<int> &arr , int m)
{
    int t=arr.size(),temp=0, x=m+1;
    vector<int>arr2;    
	int k=m+1;
    for(int i= x;i<t;i++){
        arr2.push_back(arr[i]);
    }
    
    int y= arr2.size();
    int z= y/2;
     for(int i=0, j=y-1;i<=z-1;i++,j--){
        temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
    }
    for(int i=k;i<t;i++){
        arr[i]=arr2[i-k];
    }        
}


//b

/*
    Time complexity: O(N)
    Space Complexity: O(N)

    Where N is the number of elements in the array.
*/

void reverseArray(vector<int> &arr , int m) {

	int n = arr.size();
	vector<int> brr(n , 0);
	int p = 0;
	
	for (int i = 0 ; i <= m ; i++) {
		brr[p++] = arr[i];
	}	
	for (int j = n - 1 ; j > m ; j--) {
		brr[p++] = arr[j];
	}
	for (int i = 0 ; i < n  ; i++) {
		arr[i] = brr[i];
	}
}

