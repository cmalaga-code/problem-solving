/**
 * @param {string} s
 * @return {number}
 */
const romanToInt = function(s) {
    const mapping = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000,
    };
    let result = 0;
    let skip = false;
    let char = "";
    for (let i = 0; i < s.length; i++) {
        if (skip) {
            skip = false;
            continue;
        }
        char = s[i];
        if (char in mapping) {
            if (char === 'I' && i + 1 < s.length && s[i + 1] === 'V') {
                result += 4;
                skip = true;
            } else if (char === "I" && i + 1 < s.length && s[i + 1] === "X") {
                result += 9;
                skip = true;
            } else if (char === "X" && i + 1 < s.length && s[i + 1] === "L") {
                result += 40;
                skip = true;
            } else if (char === "X" && i + 1 < s.length && s[i + 1] === "C") {
                result += 90;
                skip = true;
            } else if (char === "C" && i + 1 < s.length && s[i + 1] === "D") {
                result += 400;
                skip = true;
            } else if (char === "C" && i + 1 < s.length && s[i + 1] === "M") {
                result += 900;
                skip = true;
            } else {
                result += mapping[char]
            }
        }
        
    }
    return result;
};

console.log(romanToInt('III'));
console.log(romanToInt('LVIII'));
console.log(romanToInt('MCMXCIV'));
console.log(romanToInt('IVII'));

