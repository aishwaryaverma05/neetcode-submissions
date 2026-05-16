class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int k=s1.size(); 
       sort(s1.begin(),s1.end());
       int left=0;
       string s="";
       for(int right=0;right<s2.size();right++){
            s+=s2[right];
            if(right-left+1>k){
                s.erase(s.begin());
                left++;
            }
            if(right-left+1==k){
                string temp=s;
                sort(temp.begin(),temp.end());
                if(temp==s1) return true;
            }
       }
       return false;
    }
};
