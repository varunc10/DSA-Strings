class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.size();
        bool flag=false;
        if(n==1){
            return "";
        }
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                flag=true;
                s[i]='a';
                break;
            }
        }
        if(!flag){
            s[n-1]='b';
        }
        return s;
    }
};