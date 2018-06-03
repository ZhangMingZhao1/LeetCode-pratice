/**                                                              
 * @param {number[]} nums                                        
 * @param {number} target                                        
 * @return {number[]}  
 * 其他解题思路：http://www.cnblogs.com/grandyang/p/4130379.htmls                                          
 */                                                              
var twoSum = function(nums, target) {                            
                                                                 
  let newo = nums.map(function(item,index) {                   
    let t = {};                                                
    // console.log(item,index);                                
    t.index = index;                                           
    t.value = item;                                            
    // console.log(newo);                                      
    return t;                                                  
  });                                                          
  //console.log(newo);                                           
  newo.sort((a ,b) => a.value-b.value || -1);                  
  //console.log(newo);                                           
//   console.log(nums);                                        
  let len = newo.length;                                       
  //console.log(len);                                            
  let i = 0,j=len-1;                                           
  let ans = [];                                                
  while(i<j) {                                                 
                                                               
    if(newo[i].value+newo[j].value=== target) {                
      ans.push(newo[i].index,newo[j].index);                   
      i++;                                                     
      j--;                                                     
    }else if(newo[i].value+newo[j].value>target) {             
      j--;                                                     
  }else if(newo[i].value+newo[j].value<target) {               
      i++;                                                     
  }                                                            
                                                               
  // console.log(nums);                                        
}                                                              
  return ans;                                                    
}                                                                

console.log(twoSum([3, 2, 4], 6));;