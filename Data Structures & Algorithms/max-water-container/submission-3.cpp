class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mArea = 0;
        int spaces = heights.size()-1;

        int i = 0, j = heights.size()-1;

        while(i < j) {
            int curr = min(heights[i], heights[j]) * spaces;
            if(i+1 < heights.size() && (min(heights[j], heights[i+1])*(spaces-1)) > curr) {
                spaces--;
                i++;
            } else if(j-1 >= 0 && (min(heights[i], heights[j-1])*(spaces-1)) > curr) {
                spaces--;
                j--;
            } else {
                mArea = max(curr, mArea);
                if(heights[i] < heights[j]) i++;
                else j--;
                spaces--;
            }
        }

        return mArea;
    }
};
