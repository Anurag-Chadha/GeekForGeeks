class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i=0,j=0;
        vector <int> interVec;
        int n=arr1.size();
        int m=arr2.size();
        while(i<n &&  j<m){
            if(arr1[i]>arr2[j]){
                j++;
            }else if(arr1[i]<arr2[j]){
                i++;
            }else{
                if(interVec.size()==0 || interVec.back()!=arr1[i]){
                    interVec.push_back(arr1[i]);
                }
                i++;j++;
            }
            
        }
        return interVec;
        
    }
};
