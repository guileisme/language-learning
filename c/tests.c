#include <stdio.h>
#include <stdbool.h>

void pointer(int a, int b)
{
    int numero1 = a;
    int numero2 = b;

    // int* pointer1 = &numero1;
    // int* pointer2 = &numero2;

    printf("%p\n", &numero1);
    printf("%p\n", &numero2);

}

void min_number(int a[])
{
    int length = sizeof(a);
    int i;
    int min = a[0];
    for (i = 0; i < length; i++)
    {
        if (min > a[i])
            {
                min = a[i];
            }
    }
    printf("%d\n", min);
}

int main() {
    int array[] = {10, 30, 20, 60, 8, 57, 1, 100};
    min_number(array);
    pointer(5, 6);
    return 0;
}