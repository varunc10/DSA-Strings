class Solution {
public:
    bool check(string &s, string word){
        int i = 0, j = 0;
        while(i < s.size() && j < word.size()){
            if(s[i] == word[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return j == word.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end());
        int len = 0;
        string ans = "";
        for(auto i: dictionary){
            int n = i.size();
            if(check(s, i)){
                if(len < n){
                    len = n;
                    ans = i;
                }
            }
        }
        return ans;
    }
};