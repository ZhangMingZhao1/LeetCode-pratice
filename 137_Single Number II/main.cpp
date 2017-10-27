public class Solution {
   public static int singleNumber(int[] nums) {
        int[] bin = new int[32];
        bin[0] = 0;
        int n = nums.length;
        int result=0;  ？//最后的结果
        for(int i=0;i<32;i++){  //第i尾
            for(int j=0;j<n;j++){
                bin[i] += ( (nums[j]>>i) &1 ); //  只与1与当前位做与运算，得出的结果是改数当前位的值
                bin[i]=bin[i]%3; //然后求它们除以3的余数。
            }
            result |= (bin[i]<<i);//当前第i位还原到10进制，亦或|只要当前位有值1，就存过来。注意x|a和x&1的巧妙用法
        }
        return result;
    }
}
