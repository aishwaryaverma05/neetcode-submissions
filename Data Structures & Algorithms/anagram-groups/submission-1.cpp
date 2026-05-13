class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> vec;
        for(string str:strs){
            string k=str;
            sort(k.begin(),k.end());
            mpp[k].push_back(str);
        }
        for(auto p:mpp){
            vec.push_back(p.second);
        }
        return vec;
    }
};
