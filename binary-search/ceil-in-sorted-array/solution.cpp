// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int target) {
        // code here
        int low=0;int high=arr.size()-1;
        int mid; int ans=-1;
        while(low<=high){
            mid=low+ (high-low)/2;
            if(arr[mid]>=target) {
                ans=mid;
                high= mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
