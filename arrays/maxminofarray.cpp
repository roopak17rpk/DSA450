#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[9] = {5,6,7,8,9,1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    pair<int,int> p = {INT_MAX , INT_MIN};
    for(int i = 0 ; i < size ; i++)
    {
        if(p.first > arr[i])
        p.first = arr[i];
        if(p.second < arr[i])
        p.second = arr[i];
    }
    cout << p.first <<endl;
    cout << p.second << endl;
}
