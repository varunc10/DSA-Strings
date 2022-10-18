class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        if(chars.size()==1){
            return 1;
        }
        while(i<chars.size()){
            chars[j]=chars[i];
            int count=0;
            while(i<chars.size()&&chars[i]==chars[j]){
                i++;
                count++;
            }
            if(count>1){
                string s=to_string(count);
                for(auto c:s){
                    j++;
                    chars[j]=c;
                }
            }
            j++;
        }
        return j;
    }
};