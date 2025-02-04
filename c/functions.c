#include <stdio.h>

void function1 ();
int somar();

int main()
{
    char nome[] = "Guilherme";
    function1(nome);
    printf("%d\n", somar(5, 10));
    return 0;
}

void function1(char name[])
{
    printf("Hello, %s!\n", name);
}

int somar(int a, int b)
{
    return a + b;
}