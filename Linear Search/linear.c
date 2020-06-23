#include <stdio.h>

int main(void)
{
    int target_num;
    printf("Search: ");
    scanf("%d", &target_num);

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == target_num)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
