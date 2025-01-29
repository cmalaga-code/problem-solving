const inputData = [
    [0, -4, -6, 0, -7, -6],
    [-1, -2, -6, -8, -3, -1],
    [-8, -4, -2, -8, -8, -6],
    [-3, -1, -2, -5, -7, -4],
    [-3, -5, -3, -6, -6, -6],
    [-3, -6, 0, -8, -6, -7],
]

/*
    1. Get two d array as input. -> arr
    2. find all hour glass numbers.
    3. add all hour glass numbers.
    4. return the sum of the largest hour glass.

    The input will always be 6x6.
*/

function hourglassSum(arr) {
    let maxHourGlass = -60;
    let bufferCurrentHourGlass;
    for (let row = 1; row < 5; row++) {
        for (let column = 1; column < 5; column++) {
            bufferCurrentHourGlass = 0;
            bufferCurrentHourGlass += arr[row][column];
            bufferCurrentHourGlass += arr[row - 1][column] + arr[row - 1][column - 1] + arr[row - 1][column + 1];
            bufferCurrentHourGlass += arr[row + 1][column] + arr[row + 1][column - 1] + arr[row + 1][column + 1];
            if (maxHourGlass < bufferCurrentHourGlass)
                maxHourGlass = bufferCurrentHourGlass;
        }
        
    }
    return maxHourGlass;
}

console.log(hourglassSum(inputData));


