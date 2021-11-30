long long maxSubarraySum(int arr[], int n){
        typedef long long ll;
        ll best_sum = -1;
        ll sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum+=arr[i];
            if(best_sum < sum)
            best_sum = sum;
            
            if(sum < 0)
            sum = 0;
        }
        if(best_sum == -1)
        return *max_element(arr , arr + n);
        else
        return best_sum;
    }
