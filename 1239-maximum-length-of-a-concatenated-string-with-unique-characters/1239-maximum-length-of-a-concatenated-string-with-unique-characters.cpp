class Solution {
public:
    int ans=0;
    bool isUnique(string s){
        unordered_set<char> s1;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s1.find(s[i])!=s1.end()){
                flag=true;
                break;
            }
            s1.insert(s[i]);
        }
        if(flag){
            return false;
        }
        return true;
    }
    void helper(vector<string>& arr,string s,int i){
        if(!isUnique(s)){
            return;
        }
        if(i==arr.size()){
            int n=s.size();
            ans=max(ans,n);
            return;
        }
        helper(arr,s+arr[i],i+1);
        helper(arr,s,i+1);
    }
    int maxLength(vector<string>& arr) {
        string s="";
        helper(arr,s,0);
        return ans;
    }
};