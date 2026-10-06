class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0,r=0,maxlen=0;
        int n=s.size();
        unordered_map<char,int>mpp; // freq and element
        
         
        while(r<n){
            mpp[s[r]]++;

            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;

            }

            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna