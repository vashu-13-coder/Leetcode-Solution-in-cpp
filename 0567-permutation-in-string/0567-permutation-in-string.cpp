class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        if (n > m) return false;

        vector<int> count1(26, 0), window(26, 0);
        for (char c : s1) count1[c - 'a']++;

        for (int i = 0; i < m; i++) {
            window[s2[i] - 'a']++;

            if (i >= n) 
                window[s2[i - n] - 'a']--; // remove char leaving the window

            if (i >= n - 1 && window == count1) 
                return true;
        }
        return false;
    }
};