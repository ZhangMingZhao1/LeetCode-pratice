public class Solution {
    public int maxArea(int[] height) {
        int Max = 0;
        int area = 0;

            int l = 0;
            int r = height.length-1;
            while(l!=r) {
                int t = Math.min(height[l], height[r]);
                area = t * (r - l);
                Max = Math.max(Max, area);
                if (height[l] < height[r]) {
                    l++;
                } else {
                    r--;
                }
            }
        return Max;
    }
}
