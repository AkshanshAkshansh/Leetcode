class Solution {
public:
    int firstOccurence(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]){
                ans=mid;
                e=mid-1;
            }
            else if(target > nums[mid] && (mid+1 < nums.size())){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }    
        return ans;    
    }
    int lastOccurence(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]){
                ans=mid;
                s=mid+1;
            }
            else if(target > nums[mid] && (mid+1 < nums.size())){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }    
        return ans;    
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int x=firstOccurence(nums,target);
        int y=lastOccurence(nums,target);
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};