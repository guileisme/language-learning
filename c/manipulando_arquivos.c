#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *b;
    b = fopen("teste.txt", "r");
    char lines[100];
    while(fgets(lines, 100, b))
    {
        printf("%s\n", lines);
    }
    fclose(b);
}
