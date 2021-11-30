 int doUnion(int a[], int n, int b[], int m)  {
        int count = 0 ;
        unordered_map<int,int> m1;
        for(int  i = 0 ; i < n ; i++)
        {
            m1[a[i]]++;
        }
        for(int i = 0 ; i < m ; i++)
        {
            m1[b[i]]++;
        }
        // for(auto x : m1)
        // {
        //     if(x.second >=2)
        //     count++;
        // }
        return m1.size();
    }
