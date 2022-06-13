#include <stdio.h> 

#define LOWER 0
#define UPPER 300
#define STEP 20

// int main()
// {
//   float fahr, celsius;
//   float lower, upper, step;

//   lower = 0;
//   upper = 300;
//   step = 20;


//   fahr = lower;

//   printf("celsius\tfahrenheit\n");
//   while (fahr <= upper) {
//     celsius = 5 * (fahr - 32) / 9;
//     printf("%3.0f\t%6.1f\n", fahr, celsius);
//     fahr = fahr + step;
//   }

//   return 0;
// }

int main()
{
  float fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3.0f\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
  }
}