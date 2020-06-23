#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int target_num, start, end, middle, length;
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Search: ");
    scanf("%i", &target_num);

    length = sizeof(numbers) / sizeof(int);

    start = numbers[0];
    end = numbers[length-1];

    while (true)
    {
	middle = (start + end) / 2;

        if (target_num == numbers[middle])
	{
            printf("Found\n");
	    return 0;
	}
	else if (start > end)
	{
	    printf("Not found\n");
	    return 1;
	}
	else if (numbers[middle] < target_num)
	{
	    start = middle + 1;
	}
	else if (target_num < numbers[middle])
	{
	    end = middle - 1;
	}
    }
}
