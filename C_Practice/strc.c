#include <stdio.h>
#include <string.h>

int main()
{
    char scan[7];
    char getting[7];

    printf("Enter any string one by one character without spaces: \n");
    // getting the string character by character
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &scan[i]);
    }

    //to end the string with a null character
    scan[6] = '\0';


    // getting the string directly
    printf("\nEnter the same string all at once: \n");
    fgets(getting, 7, stdin);

    printf("\n %s \n",getting);

    // comparing the strings and expected output is 0
    int compare = strcmp(scan, getting);
    printf("%d\n", compare);

    if (compare == 0)
    {
        printf("The strings are same\n");
    }
    else
    {
        printf("The string are not same !!!\n");
    }

    return 0;
}