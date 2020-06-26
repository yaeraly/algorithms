#include <stdio.h>

int fact(int f);

int main(void)
{
    int f;
    printf("Input n!: ");
    scanf("%i", &f);


    printf("Fact :%i \n", fact(f));
}

int fact(int f)
{
    if (f == 1)
	return 1;
    else
	 return f * fact(f - 1);
}
