#include <stdio.h>


int main(void)
{
    int numbers[] = {9,8,7,6,5,4,3,2,1,0};
    int length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        printf("%i", numbers[i]);
    }
    printf("\n");


    int counter = 0, stop = length - 1, small_num = 0, position;

    for (int i = 0; i < stop; i++)
    {
	small_num = numbers[i];
	for (int j = i; j < stop; j++)
	{
	    if (small_num > numbers[j+1])
	    {
		small_num = numbers[j+1];
		position = j + 1;
	    }
	    else
	    {
		position = numbers[i];
	    }
	}
	numbers[position] = numbers[i];
	numbers[i] = small_num;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%i", numbers[i]);
    }
    printf("\n");

}
