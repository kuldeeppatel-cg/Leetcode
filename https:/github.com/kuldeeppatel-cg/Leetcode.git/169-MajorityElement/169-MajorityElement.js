// Last updated: 17/07/2026, 14:20:05
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let obj = {};
   for(let i=0; i<nums.length;i++){
      if(obj[nums[i]] != null){
         obj[nums[i]]++;
      }
      else{
         obj[nums[i]] = 1;
      }
   }
   let max = 0;
   for(val in obj){
     if(obj[val] > max){
       max = obj[val];
       var res = parseInt(val);
     }
   }
   return res;
};