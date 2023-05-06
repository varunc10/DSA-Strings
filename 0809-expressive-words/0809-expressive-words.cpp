class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int ans = 0;
        unordered_map<char, int> m1;
        for(auto i: s){
            m1[i]++;
        }
        for(auto word: words){
            bool flag = true;
            int i = 0, j = 0, k = 0, l = 0;
            unordered_map<char, int> m2;
            for(auto i: word){
                m2[i]++;
            }
            if(m1.size() != m2.size()){
                flag = false;
            }
            while(i < s.size() && k < word.size()){
                if(s[i] == word[k]){
                    while(j < s.size() && s[i] == s[j]){
                        j++;
                    }
                    int freq1 = j - i;
                    while(l < word.size() && word[k] == word[l]){
                        l++;
                    }
                    int freq2 = l - k;
                    if(freq2 > freq1){
                        flag = false;
                        break;
                    }
                    else if(freq1 != freq2 && freq1 <= 2){
                        flag = false;
                        break;
                    }
                    i = j;
                    k = l;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if((i == s.size() && k != word.size()) || (i != s.size() && k == word.size())){
                flag = false;
            }
            if(flag){
                ans++;
            }
        }
        return ans;
    }
};