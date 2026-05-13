class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalnum(s[left])) {
                left++;
                continue;
            }
            if(!isalnum(s[right])) {
                right--;
                continue;
            }    
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
