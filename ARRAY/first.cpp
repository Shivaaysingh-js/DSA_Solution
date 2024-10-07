class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int> result;
        int x = a+1;
        int y = b+2;
        result.push_back(x);
        result.push_back(y);
        
        return result;
    }
};
