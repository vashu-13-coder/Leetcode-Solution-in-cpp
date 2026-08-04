class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for (int i = 0 ; i < s.length() ; i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                st.push_back(s[i] - 'A' + 'a');
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                st.push_back(s[i]);
            }
        }
        for (int i = 0 , j = st.length() - 1 ; i < j ; i++ , j--){
            if (st[i] != st[j]){
                return false;
            }
        }
        return true;
    }
};