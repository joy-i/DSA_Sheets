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