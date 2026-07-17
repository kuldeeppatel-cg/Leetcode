// Last updated: 17/07/2026, 14:20:44
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let arr = [];
    for(let i=0; i<nums.length; i++){
        for(let j=i+1; j<nums.length; j++){
            if(nums[i]+nums[j] == target){
                arr.push(i);
                arr.push(j);
               return arr;
            }
        }
    }
};