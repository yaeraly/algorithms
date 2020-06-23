#include <stdio.h>

int main(void)
{
    int target_num, length;

    printf("Search: ");
    scanf("%d", &target_num);

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++)
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
