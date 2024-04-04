class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int y=*max_element(nums.begin(),nums.end());
        int i=0; int count=0; int sum=0;
        for(int j=0;j<nums.size();++j){
            if(nums[i]==nums[j]){
                count++;
                 if(count>2){
                nums[j]=y+1;  //y mera max;
                sum++;
            }
            }
           
            // if(nums[i]!=nums[j])
            else{
                i=j;
                count=1;
            }
        }

        sort(nums.begin(),nums.end());
        return nums.size()-sum;

    }
};