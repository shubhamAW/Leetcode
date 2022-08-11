class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int currEle=1;
        for(int i=0;i<target.size();i++){
            while(currEle != target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                currEle++;
            }
            ans.push_back("Push");
            currEle++;
        }
        return ans;
    }
};
