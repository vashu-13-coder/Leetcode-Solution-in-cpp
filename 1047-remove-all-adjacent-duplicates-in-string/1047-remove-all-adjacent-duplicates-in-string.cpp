class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        int i = 0;
        while ( i < n){
            if (s[i] == s[i+1]){
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