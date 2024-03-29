#include <stdio.h>
#include <string.h>

int main() {
    int num, i, j;
    scanf("%d", &num);

    char string[100];

    for (i = 0; i <= num; i++) {
        fgets(string, sizeof(string), stdin); 
        int len = strlen(string);
        int arry[len], count = 0;
        int min = 99;

        for (j = 0; j < len; j++) {
            if(string[i]>='0'&&string[i]<='9')
            {
                count += string[i]-48;
            }
        }

        if (count > 0) {
            for (j = 0; j < count; j++) {
                if (arry[j] < min) {
                    min = arry[j];
                }
            }
            for (j = 0; j < count; j++) {
                if (arry[j] == min) {
                    printf("(%d) ", arry[j]);
                } else {
                    printf("%d ", arry[j]);
                }
            }
        } else {
            printf("No digit char");
        }
        printf("\n");
    }

    return 0;
}
