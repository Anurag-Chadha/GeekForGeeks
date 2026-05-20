class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int high=arr.size()-1;int low=0;
        int mid;
        while(low<=high){
            mid=low+ (high-low)/2;
            if(arr[mid]<=target) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
