class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int i=0;
        string result = strs[0];
        for(int i=1;i<strs.size();i++){
            int temp=0;
            while(temp<strs[i].size()&&temp<result.size()&&result.at(temp)==strs[i].at(temp)){
                temp++;
            }
            result=result.substr(0,temp);
        }
        return result;
    }
};
