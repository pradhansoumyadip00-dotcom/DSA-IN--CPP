class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        // Step 1: Create new array
        vector<int> c(n + m);

        // Step 2: Copy nums1
        for (int i = 0; i < n; i++) {
            c[i] = nums1[i];
        }

        // Step 3: Copy nums2
        for (int i = 0; i < m; i++) {
            c[n + i] = nums2[i];
        }

        // Step 4: Sort the combined array
        sort(c.begin(), c.end());

        // Step 5: Find median
        int p = n + m;

        if (p % 2 == 0) {
            return (c[p / 2] + c[p / 2 - 1]) / 2.0;
        }
        else {
            return c[p / 2];
        }
    }
};