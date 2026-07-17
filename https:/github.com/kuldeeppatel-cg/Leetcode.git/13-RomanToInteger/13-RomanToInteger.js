// Last updated: 17/07/2026, 14:20:31
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let obj = {"I":1, "V": 5,"X":10,"L":50,"C":100,"D":500,"M":1000}
  let arr = s.split("");
  let sum = 0;
  for(let i=0; i<arr.length; i++){
    if(obj[arr[i]] < obj[arr[i+1]]){
        sum -= obj[arr[i]];
    }
    else{
      sum += obj[arr[i]];
    }
    
  }
  return sum;
};