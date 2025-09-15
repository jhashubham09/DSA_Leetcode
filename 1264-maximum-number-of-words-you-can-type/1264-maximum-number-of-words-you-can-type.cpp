class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broke(brokenLetters.begin(), brokenLetters.end());

        bool cType = true;
        int count = 0;

        for(int i=0; i <= text.size(); i++){
            if(i == text.size() || text[i] == ' '){
                if(cType){
                    count++;
                }
                cType = true;

            }
            else{
                if(broke.count(text[i])){
                    cType = false;
                }
            }
        }
        return count;
    }
    
};