/**
 * @param {number} x
 * @return {boolean}
 */
const isPalindrome = function(x) {
    const strX = x.toString()
    let rev = "";
    for (let i = strX.length - 1; i >= 0; i--) rev += strX[i];
    return strX === rev;
};

console.log(isPalindrome(121));
console.log(isPalindrome(-121));
console.log(isPalindrome(10));
console.log(isPalindrome(101));