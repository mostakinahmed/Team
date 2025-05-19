#include <stdio.h>

void dev3()
{
    printf("dev 3");
}

void sum()
{
    printf("sum");
}

void dev1()
{
    printf("dev 1");
}

void mo()
{
    printf("dev 2");
}

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
////dev 1 is submit code to dev
// dev 2 is submit their code
// dev 2 is working
// data add
// dev 2 done
