class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2){
            return true;
        }
        int j=s1.size();
        for(int i=j;i<s2.size();i++){
            v2[s2[i-j]-'a']--;
            v2[s2[i]-'a']++;
            if(v1==v2){
                return true;
            }
        }
        return false;
    }
};