/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
   nums.sort();
   for(let i=0; i<nums.length; i++){
    let  j = i+1;
    if(nums[i]== nums[j]){
        return true;
    }}
    return false;
   
};