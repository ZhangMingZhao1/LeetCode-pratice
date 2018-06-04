/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
  let ans = [];
  nums.sort((a,b) => a-b || -1);
  let len = nums.length;
  for(let i = 0; i < len; i++) {
      if(nums[i] > 0)
          break;
      if(i>0 && nums[i]===nums[i-1])
          continue;
      let target = 0 - nums[i];
      let l = i+1,r=len-1;

      while(l<r) {
          if(nums[l]+nums[r]===target && (((l-1>=0)&&nums[l]!==nums[l-1])||(nums[r]!==nums[r+1]&&(r+1<=len))) ) {
              let t = [];
              t.push(nums[i],nums[l],nums[r]);
              ans.push(t);
              l++;
              r--;
          }else if(nums[l]+nums[r]<target) {
              l++;
          }else if(nums[l]+nums[r]>target) {
              r--;
          }else {
              l++;
              r--;
          }
      }
  }
  return ans;
};

console.log(threeSum([-1,0,1,2,-1,-4]));

