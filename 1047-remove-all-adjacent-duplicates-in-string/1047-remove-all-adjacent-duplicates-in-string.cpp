class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        int i = 0;
        while ( i < n){
            int j = i + 1;
            if (s[i] == s[j]){
                s.erase(i , 2);
                n = s.length();
                i = 0;
            }
            else{
                i++;
            }
        }
        return s;
    }
};