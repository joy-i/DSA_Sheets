vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	int min=arr[0], temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int kSmall = arr[k-1];
    int kLarge = arr[n-k] ;
    vector<int> result = {kSmall, kLarge};

    return result;
}
