class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        int psum=0;
        mp[0]=1;
        for(int i=0;i<n;i++)
        //psum=prefix sum
        {
            psum=psum+nums[i];

            if(mp.find(psum-k)!=mp.end())
            {
                count=count+mp[psum-k];
            }
mp[psum]++;

        }
    return count;
    }
};