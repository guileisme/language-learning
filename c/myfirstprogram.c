#include <stdio.h>
#include <stdbool.h>

void areaCalculator(float width, float length)
{
  float a = width;
  float b = length;
  float area = a * b;
  printf("Area of retangle is: %.3f\n", area);
}

void mercadinho(int quantidade, float preco)
{
  int q = quantidade;
  float p = preco;
  float total = q * p;
  printf("Total cost: $%.2f\n", total);
}

void float_int(int x, int y)
{
  float divisao = (float) x / y;
  printf("A divisão é: %.2f\n", divisao);
}

void doorCode(int numero)
{
  /* if (numero == 2245)
     {
        printf("Correct code.\nThe door is now open.\n")
     }

     else
     {
        printf("Incorrect code.\n The door remains closed.\n")
     }
  */
  (numero == 2245) ? printf("Correct code.\nThe door is now open.\n") : printf("Incorrect code.\n The door remains closed.\n"); 
}

void reorderNumbers(int number)
{
  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (number) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + number % 10;
    // Remove the last number of 'numbers'
    number /= 10;
  }
  printf("%i\n", revNumbers);

/*

Existe o do/while, que roda o código e depois checa a condição.
a sintaxe é a seguinte:
do{código}
while (condição);  

*/

}

int main() {
  int n = 15;
  float f = 3.141516;
  char nome[] = "Guilherme";
  printf("Olá, meu nome é %lu!", sizeof(nome));
  printf("\nfloat: %f", f);
  printf("\nint: %i\n", n);
  areaCalculator(7.89, 3.08);
  mercadinho(13, 4.89);
  float_int(4, 5);
  doorCode (2245);
  reorderNumbers(12345);
  return 0;
}