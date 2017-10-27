public class Solution {
       public int lengthOfLongestSubstring(String s) {

        if(s.length()==0) return 0;
        int pos = 0;
        int Max = 1;
        int flag = 0;
        int cnt = 1;
        String ans = "";
        for(int i = 1; i < s.length(); i++) {
            flag = 0;
            for(int j = pos; j < i; j++) {
                if(s.charAt(i) == s.charAt(j)) {
                    flag = 1;
                    pos = j+1;//如果有相同的，那么下一个遍历的点就要跳过这个，集合不能包括这个
                    break;
                }
                    cnt++;
            }
                    Max = Max>cnt?Max:cnt;
                    cnt = 1;
        }
        return Max;

    }
}
