class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        queue<int> pos;
        queue<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                pos.push(arr[i]);
            }else{
                neg.push(arr[i]);
            }
        }
        int i=0;
        while(pos.size()!=0){
            arr[i]=pos.front();
            pos.pop();
            i++;
        }
        while(neg.size()!=0){
            arr[i]=neg.front();
            neg.pop();
            i++;
        }
    }
};
