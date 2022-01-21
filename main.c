#include <stdio.h>
#include <stdlib.h>

int main()
{
float wzrost, waga, bmi;
printf("Kalkulator BMI");
printf("\n");
printf("podaj swoj wzrost w metrach : ");
scanf("%f", &wzrost);
printf("podaj swoja wage : ");
scanf("%f", &waga);
wzrost=wzrost*wzrost;
bmi=waga/wzrost;
printf("twoje bmi wynosi : %f", bmi);
printf("\n");
if(bmi<18.5)
    printf("niedowaga");
else if(bmi<24.9)
    printf("waga zdrowa");
else if(bmi<29.9)
    printf("lekka nadwaga");
else if(bmi<34.9)
    printf("nadwaga 1 stopnia");
else if(bmi<39.9)
    printf("nadwaga 2 stopnia");
else
    printf("nadwaga 3 stopnia");
}
