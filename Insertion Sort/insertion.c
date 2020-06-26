#include <stdio.h>


int main(void)
{
    int numbers[] = {8,1,4,6,5,7,9};
    int length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }

    printf("\n\n");

    int container;

    for (int i = 1; i < length; i++)
    {
	for (int i = 0; i < length; i++)
	{
            printf("%i ", numbers[i]);
        }

        printf("\n");

	for (int j = i; j != 0; j--)
	{
	    if (numbers[j-1] > numbers[j])
	    {
		container = numbers[j];
		numbers[j] = numbers[j-1];
		numbers[j-1] = container;
	    }
	}
    }
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }

    printf("\n");

}
