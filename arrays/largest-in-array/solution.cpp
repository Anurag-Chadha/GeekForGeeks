#include <climits>
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largestElem=INT_MIN;
        for(auto it: arr){
            if(it>largestElem){
                largestElem=it;
            }
        }
        return largestElem;
    }
};
