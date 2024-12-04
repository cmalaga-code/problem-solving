#include <stdio.h>
#include <stdbool.h>

const char k[7] = {
    'I',
    'V',
    'X',
    'L',
    'C',
    'D',
    'M'
};

const int v[7] = {
    1,
    5,
    10,
    50,
    100,
    500,
    1000
};


int romanToInt(char* s) {
    int result = 0;
    int i = 0;
    bool skip = false;
    while (s[i] != '\0') {
        if (skip) {
            skip = false;
            i++;
            continue;
        }
        if (s[i] == 'I' && s[i + 1] != '\0' && s[i + 1] == 'V') {
            result += 4;
            skip = true;
        } else if (s[i] == 'I' && s[i + 1] != '\0' && s[i + 1] == 'X') {
            result += 9;
            skip = true;
        } else if (s[i] == 'X' && s[i + 1] != '\0' && s[i + 1] == 'L') {
            result += 40;
            skip = true;
        } else if (s[i] == 'X' && s[i + 1] != '\0' && s[i + 1] == 'C') {
            result += 90;
            skip = true;
        } else if (s[i] == 'C' && s[i + 1] != '\0' && s[i + 1] == 'D') {
            result += 400;
            skip = true;
        } else if (s[i] == 'C' && s[i + 1] == 'M') {
            result += 900;
            skip = true;
        } else {
            for (int x = 0; x < sizeof(k); x++) {
                if (s[i] == k[x]) {
                    result += v[x];
                    break;
                }
            }
        }
        i++;
    }
    return result;
}

int main() {
    printf("%d\n", romanToInt("III"));
    printf("%d\n", romanToInt("LVIII"));
    printf("%d\n", romanToInt("MCMXCIV"));
    printf("%d\n", romanToInt("IVII"));
    return 0;
}