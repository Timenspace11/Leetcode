class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         if(nums.size()==0)return 0;
         int y=*max_element(nums.begin(),nums.end());
         int z=y+1; int count=0;
        
         for(int j=0;j<nums.size();j++){
            if(nums[j]==val){
                count++;
                nums[j]=z;
            }
         }
         sort(nums.begin(),nums.end());
         return nums.size()-count;
    }
};