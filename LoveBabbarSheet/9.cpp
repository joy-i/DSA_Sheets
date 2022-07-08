int minimizeIt(vector<int> A, int K)
{
    int n = A.size();
    sort(A.begin(), A.end());
    int ans = A[n - 1] - A[0];
    int minimum = A[0] + K;
    int maximum = A[n - 1] - K;
    int current_minimum, current_maximum;
    for (int i = 0; i < n - 1; i++)
    {
        
        current_minimum = min(A[i + 1] - K, minimum);
        current_maximum = max(A[i] + K, maximum);
      
        if (current_minimum >= 0)
        {
            ans = min(ans, current_maximum - current_minimum);
        }
    }
    return ans;
}
