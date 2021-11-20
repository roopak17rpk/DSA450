#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main() {
   vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
   int neg = 0;
   int pos = arr.size() - 1;
   while(neg < pos)
   {
       if(arr[pos] > 0 )
       pos--;
       else
       {
           if(arr[neg] > 0 )
           {
               swap(arr[neg] , arr[pos]);
               pos--;
               neg++;
           }
           else
           neg++;
       }
   }
   for(auto i : arr)
   {
       cout << i << " ";
   }
}
