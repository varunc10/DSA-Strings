class Solution {
public:
    string makeGood(string s) {
        while(true){
            bool flag=false;
            for(int i=1;i<s.size();i++){
                if((s[i]==s[i-1]+32)||(s[i]+32==s[i-1])){
                    s.erase(i-1,2);
                    flag=true;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        return s;
    }
};