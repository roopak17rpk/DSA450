void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-2 ; i >= 0 ; i--)
    {
        arr[i+1] = arr[i];
    }
    //arr[n-1] = arr[0];
    arr[0] =temp;
}
