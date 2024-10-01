#include <stdio.h>

int main(int argc, char *argv[]) {
    int a = 6;
    int s = 0;
    int sum = 0;

    while (a < 10) {
        a++;
        if (a % 2 == 0) continue;
        sum += a; // 7, 9 = 16
    }

    switch (a % 2) {
        case 2: s++; // 1
        case 3: a += s;
        default: a++;
    }
    printf("%d%d", s, a);
    return 0;
}