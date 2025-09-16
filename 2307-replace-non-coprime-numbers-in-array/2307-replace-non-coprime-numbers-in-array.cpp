class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st;

        for(int n : nums){
            int curr = n;

            while(!st.empty() && gcd(st.back(), curr) > 1){
                curr = lcm(st.back(), curr);
                st.pop_back();
            }

            st.push_back(curr);
        }

        return st;
    }

    int gcd(int a, int b){
        while(b != 0){
            int t = a % b;
            a = b;
            b = t;


        }
        return a;
    }

    int lcm(int a, int b){
        return (a/gcd(a, b))*b;
    }
};