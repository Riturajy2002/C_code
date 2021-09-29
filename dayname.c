#include<stdio.h>
#include<conio.h>
void main()
{
int day_name;
printf("enter the value of day ");
scanf("%d",&day_name);
switch(day_name)
{
case 1:
printf("day name is sunday");
break;
case 2:
printf("day name is monday");
break;
case 3:
printf("day name is tuesday");
break;

case 4:
printf("day name is wednesday");
break;
case 5:
printf("day name is thureday");
break;
case 6:
printf("day name is friday");
break;
case 7:
printf("day name is saturday");
break;
default :
    printf("invalid entry");
}
getch();

}



