class Solution {
public:
    int minCost(string s, vector<int>& v) {
        int ans=0,i=0;
        while(i+1<s.size()){
            if(s[i]==s[i+1]){
                vector<int> temp;
                temp.push_back(i);
                int mx=v[i],ind=i;
                while(s[i]==s[i+1]){
                    temp.push_back(i+1);
                    if(mx<v[i+1]){
                        ind=i+1;
                        mx=v[i+1];
                    }
                    i++;
                }
                for(int j=0;j<temp.size();j++){
                    if(temp[j]!=ind){
                        ans+=v[temp[j]];
                    }
                }
            }
            else{
                i++;
            }
        }
        return ans;
    }
};