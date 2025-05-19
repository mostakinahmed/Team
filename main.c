#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("levi.txt", "r");
    int num;

    if (ptr == NULL)
    {
        printf("file not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of num: %d\n", num);
        fclose(ptr);
    }
    return 0;
}
