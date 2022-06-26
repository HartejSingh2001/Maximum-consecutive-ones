class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size();
        int i,count=0,maxcount=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(count>=maxcount)
                {
                    maxcount=count;
                }
                count=0;
            }
        }
        // V.I to write this cond.below take case 1 1 0 1 1 1 for example ending is at 1 so to
        // update maxcount at last is required.
        
        if(count>=maxcount)
        {
            maxcount=count;
        }
        return maxcount;
    }
};
