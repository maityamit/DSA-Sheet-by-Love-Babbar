int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=0;
        unordered_map<int,int> seen;
        for(int i=0;i<n;i++){
            if(seen.count(a[i])!=1){
                count++;
            }
            seen[a[i]]++;
        }
        for(int i=0;i<m;i++){
            if(seen.count(b[i])!=1){
                count++;
            }
            seen[b[i]]++;
        }
        return count;
        
    }
