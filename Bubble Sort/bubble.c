#include <stdio.h>


int main(void)
{
    int numbers[] = {6,5,3,1,8,9,0,4,2,7};
    int length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        printf("%i", numbers[i]);
    }
    printf("\n");


    int counter = length - 1;
    while (counter != 0)
    {
	for (int i = 0; i < counter; i++)
	{
	    if (numbers[i] > numbers[i+1])
	    {
		int big_num = numbers[i];
		numbers[i] = numbers[i+1];
		numbers[i+1] = big_num;
	    }
	}
	counter--;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%i", numbers[i]);
    }
    printf("\n");
}
