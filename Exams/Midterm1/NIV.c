#include <stdio.h>
int main ()
{
int OI = 1010;
printf("First Number: %d \n", OI);
int NI = ((OI) << 3) + (~OI);
printf("Second Number: %d \n", NI);
}

