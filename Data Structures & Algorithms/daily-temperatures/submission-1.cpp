class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>result;
        for(int i=0;i<temperatures.size();i++){
            int num=0;
            bool flag = false;
            for(int j=i+1;j<temperatures.size();j++){
                num++;
                if(temperatures[j]>temperatures[i]){
                    result.push_back(num);
                    flag=true;
                    break;
                }
            }
            if(!flag) result.push_back(0);
        }
        return result;
    }
};
