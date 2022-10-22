class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> v(128,0);
        for(auto i:t){
            v[i]++;
        }
        int len=t.size();
        int j=0,count=0,mini=0,minlen=INT_MAX;
        for(int i=0;i<s.size();i++){
            v[s[i]]--;
            if(v[s[i]]>=0){
                count++;
            }
            if(count==len){
                while(j<=i&&count==len){
                    if(minlen>=i-j+1){
                        minlen=i-j+1;
                        mini=j;
                    }
                    v[s[j]]++;
                    if(v[s[j]]>0){
                        count--;
                    }
                    j++;
                }
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        string ans=s.substr(mini,minlen);
        return ans;
    }
};