class Solution {
public:
    string countAndSay(int n) {
        if(n==0){
            return "";
        }
        if(n==1){
            return "1";
        }
        string s="1";
        while(n>1){
            string temp="";
            int i=0;
            while(i<s.size()){
                int count=1;
                while(i+1<s.size()&&s[i]==s[i+1]){
                    count++;
                    i++;
                }
                temp+=to_string(count)+s[i];
                i++;
            }
            s=temp;
            n--;
        }
        return s;
    }
};