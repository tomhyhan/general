#include <stdio.h>

int main(void)
{
    int n, num, num_li[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n>0){
        num = n % 10;
        num_li[num] = num_li[num] + 1;
        n = n / 10;
    }

    printf("Digit:      ");
    for (num =0; num<= 9; num++){
        printf("%3d", num);
    }
    printf("\noccurences:");
    for (num =0; num<=9; num++){
        printf("%3d", num_li[num]);
    }
    return 0;
}
