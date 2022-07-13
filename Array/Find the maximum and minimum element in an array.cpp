pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long max = a[0];
    long long min = a[0];
    for(int i=1;i<n;i++){
        if(max>a[i]){
            max=a[i];
        }
        if(min<a[i]){
            min=a[i];
        }
        
    }
    
     return {max,min};
}
