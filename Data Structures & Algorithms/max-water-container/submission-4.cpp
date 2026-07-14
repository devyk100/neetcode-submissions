class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mArea = 0;
        int spaces = heights.size()-1;

        int i = 0, j = heights.size()-1;
        // first thing: when you move a pointer, what guarantee do you have that the index you moved out of is not part of an answer? the guarantee is that, if the next new answer is giving a bigger answer, that certainly means the next height is larger, even if its just a unit gain in height, there's a tremendous gain, so we can without hesitation move those pointers. When you are stuck, you move the smaller one - because the larger one might again, contribute to an answer, and we want to check the entire in between parts too.
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
