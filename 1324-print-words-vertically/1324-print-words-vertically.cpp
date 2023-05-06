class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> v;
        string word = "";
        int mx = 0, cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
                cnt++;
                mx = max(mx, cnt);
            }
            else{
                v.push_back(word);
                cnt = 0;
                word = "";
            }
        }
        if(word.size() > 0){
            v.push_back(word);
        }
        vector<string> ans;
        for(int i = 0; i < mx; i++){
            string word = "";
            for(int j = 0; j < v.size(); j++){
                if(i < v[j].size()){
                    word += v[j][i];
                }
                else{
                    word += " ";
                }
            }
            int j = word.size() - 1;
            string s1 = "";
            while(word[j] == ' '){
                j--;
            }
            int k = 0;
            while(k <= j){
                s1 += word[k];
                k++;
            }
            ans.push_back(s1);
        }
        return ans;
    }
};