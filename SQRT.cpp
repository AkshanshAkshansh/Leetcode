class Solution {
public:
    int mySqrt(int x) {
        int s=1;
        int e=x;
        int ans;
        if(x==0){
            return 0;
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mid==x/mid){
                return mid;
            }
            if(mid > x/mid){
                e=mid-1;
            }
            if(mid<x/mid){
             ans=mid;
             s=mid+1;                   
            }
        }        
    return ans;
    }
};