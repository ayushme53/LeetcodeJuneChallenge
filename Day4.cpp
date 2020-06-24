/* Reverse String */

class Solution {
public:
    void reverseString(vector<char>& s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int l = s.size();
        for(int i=0; i<l/2; i++)
        {
            swap(s[i],s[l-i-1]);
        }
    }
};
