// Last updated: 17/07/2026, 14:20:36
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
     let reverse = 0;
   let num = x;
    while(num>0){
       let dig = num%10;
       reverse = reverse*10 + dig;
       num = Math.floor(num/10);
    }
    let check = (reverse == x)?true:false;
    return check;
};