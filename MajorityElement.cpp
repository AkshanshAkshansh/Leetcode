class Solution {
public:
    int majorityElement(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int ele;
        int count=0;
        int n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                count++;                                
            }
            if(count>=n/2){
                ele=nums[i];
                return ele;
            }
            if(nums[i]!=nums[i+1]){
                count=0;
            }
        }    
        return ele;
    }
};