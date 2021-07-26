#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, spa, block, second_block;

    do  //Will request the height if out of range
    {
        height = get_int("Height: ");  //Promt user for pyramid height
    }
    while (height < 1 || height > 8);  //Sets the limit of row input by user

    for (int i = 0; i < height; i++)
    {
        for (spa = 0; spa < height - (i + 1); spa++)  //Adds spaces per row
        {
            printf(" ");
        }
        for (block = 0; block < i + 1; block++)  //Addss # per row
        {
            printf("#");
        }
        printf("  #");  //Pyramid space

        for (second_block = 0; second_block < i; second_block++)
        {
            printf("#");  //Pyramid second half
        }

        printf("\n");  //Adds a new row in the pyramid up to n
    }
}