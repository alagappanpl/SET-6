#include <stdio.h>
main()
{
int l,b,h,TSA,volume;
printf("Enter the length:");
scanf("%d",&l);
printf("Enter the breadth:");
scanf("%d",&b);
printf("Enter the height:");
scanf("%d",&h);
TSA=2*(l*b)+2*(b*h)+2*(l*h);
volume=l*b*h;
printf("\nThe TSA of cuboid is: %d",area);
printf("\nThe volume of cuboid is: %d",volume);
}
