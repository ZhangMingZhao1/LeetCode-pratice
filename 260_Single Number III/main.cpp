public class Solution {
    public int[] singleNumber(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();
        for(int n : nums) {
            if(!set.contains(n)) {
                set.add(n);
            }else {
                set.remove(n);
            }
        }

        int[] ans = new int[set.size()];
        int cnt = 0;

        for(int n:set) {
            ans[cnt++] = n;
        }
        return ans;
    }
}
