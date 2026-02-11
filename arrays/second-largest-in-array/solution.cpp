#include<climits>
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        //OPTIMAL APPROACH
        int largest=INT_MIN;
        int secondLargest=INT_MIN;
        
        for(auto it: arr){
            if(largest<it){
                secondLargest=largest;
                largest=it;
            }
            else if(secondLargest<it && it!=largest){
                secondLargest=it;
            }
            
        }
        return (secondLargest!=INT_MIN)?secondLargest:-1;
    }
