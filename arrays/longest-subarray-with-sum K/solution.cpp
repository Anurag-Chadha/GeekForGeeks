class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map <int,int> prefixSum;
        int sum=0;
        int maxLen=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                maxLen=i+1;
            }
            if(prefixSum.find(sum-k)!=prefixSum.end()){
                maxLen=max(maxLen,i-prefixSum[sum-k]);
            }

            if(prefixSum.find(sum)==prefixSum.end()) {
                prefixSum[sum]=i;
            }
        }
        return maxLen;
    }
};
