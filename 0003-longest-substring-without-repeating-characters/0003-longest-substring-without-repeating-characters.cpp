class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        vector<int>lastSeen(256, -1);

        int maxLen = 0;
        int left = 0;

        for(int right = 0; right < n; right++){
            char c = s[right];

            if(lastSeen[c] >= left){
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;
            maxLen = max(maxLen, right - left + 1); 
        }
        return maxLen;
    }
};