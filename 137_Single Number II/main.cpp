public class Solution {
   public static int singleNumber(int[] nums) {
        int[] bin = new int[32];
        bin[0] = 0;
        int n = nums.length;
        int result=0;  ��//���Ľ��
        for(int i=0;i<32;i++){  //��iβ
            for(int j=0;j<n;j++){
                bin[i] += ( (nums[j]>>i) &1 ); //  ֻ��1�뵱ǰλ�������㣬�ó��Ľ���Ǹ�����ǰλ��ֵ
                bin[i]=bin[i]%3; //Ȼ�������ǳ���3��������
            }
            result |= (bin[i]<<i);//��ǰ��iλ��ԭ��10���ƣ����|ֻҪ��ǰλ��ֵ1���ʹ������ע��x|a��x&1�������÷�
        }
        return result;
    }
}
