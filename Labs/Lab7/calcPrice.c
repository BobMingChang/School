#include <stdio.h>
int main() {
int IN;
int Q;
char D[12];
double UP;

printf("Enter item number:");
scanf("%d", &IN);
printf("Enter unit price:");
scanf("%lf", &UP);
printf("Enter quantity:");
scanf("%d", &Q);
printf("Enter purchase date:");
scanf("%s", &D);

printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", IN, UP, Q, D, UP * Q);
return 0;
}

