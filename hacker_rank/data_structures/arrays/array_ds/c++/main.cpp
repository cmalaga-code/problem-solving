//
// Created by cmala on 1/28/2025.
//
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> inputData = {
    {0, -4, -6, 0, -7, -6},
    {-1, -2, -6, -8, -3, -1},
    {-8, -4, -2, -8, -8, -6},
    {-3, -1, -2, -5, -7, -4},
    {-3, -5, -3, -6, -6, -6},
    {-3, -6, 0, -8, -6, -7},
};

int hourglassSum(vector<vector<int>> arr) {
    signed int maxHourGlass = -60, bufferCurrentHourGlass = 0;

    for (int row = 1; row < 5; row++) {
      for (int col = 1; col < 5; col++) {
          bufferCurrentHourGlass = 0;
          bufferCurrentHourGlass += arr[row][col];
          bufferCurrentHourGlass += arr[row - 1][col] + arr[row - 1][col - 1] + arr[row - 1][col + 1];
          bufferCurrentHourGlass += arr[row + 1][col] + arr[row + 1][col - 1] + arr[row + 1][col + 1];
          if (maxHourGlass < bufferCurrentHourGlass) {
            maxHourGlass = bufferCurrentHourGlass;
          }
      }
    }
    return maxHourGlass;
}

int main() {
  std::cout << hourglassSum(inputData) << std::endl;
  return 0;
}
