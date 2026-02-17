class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i=0,j=0;
        vector <int> unionVec;
        
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                if( unionVec.size()==0 || unionVec.back()!=a[i]){
                    unionVec.push_back(a[i]);
                }
                i++;
            }
            else{
                if( unionVec.size()==0 || unionVec.back()!=b[j]){
                    unionVec.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<a.size()){
            if( unionVec.size()==0 || unionVec.back()!=a[i]){
                    unionVec.push_back(a[i]);
                }
                i++;
        }
        while(j<b.size()){
            if( unionVec.size()==0 || unionVec.back()!=b[j]){
                    unionVec.push_back(b[j]);
                }
                j++;
        }
        return unionVec;
    }
};
