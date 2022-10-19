class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        vector<int> del;
        for(int i=0;i<guess.size();i++){
            if(guess[i]==secret[i]){
                bulls++;
                del.push_back(guess[i]);
            }
        }
        for(auto i:del){
            auto it1=find(secret.begin(),secret.end(),i);
            auto it2=find(guess.begin(),guess.end(),i);
            secret.erase(it1);
            guess.erase(it2);
        }
        for(int i=0;i<guess.size();i++){
            auto it=find(secret.begin(),secret.end(),guess[i]);
            if(it==secret.end()){
                continue;
            }
            else{
                cows++;
                secret.erase(it);
            }
        }
        string ans="";
        ans+=to_string(bulls);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        return ans;
    }
};