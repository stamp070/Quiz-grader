#include <stdio.h>

int main() {
    int num, arry[50], i, j;
    scanf("%d", &num);
    int state[num];

    for (i = 0; i < num; i++) {
        scanf("%d", &arry[i]);
        state[i] = 1;
        for (j = 2; j < arry[i]; j++) {
            if (arry[i] % j == 0) {
                state[i] = 0;
                break;
            }
        }
        if (state[i] == 0) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }




    return 0;
}
