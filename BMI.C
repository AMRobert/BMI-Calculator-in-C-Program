//BMI CALCULATOR
#include<stdio.h>
#include<conio.h>
void main()
{
float w,h,bmi,imp_weight,imp_weight_1;
int n,n1;
clrscr();
printf("1 Height in cm\n");
printf("2 Height in feet\n");
printf("3 Height in m\n");
scanf("%d",&n);
if(n==1)
{
printf("Enter height in cm: ");
scanf("%f",&h);
h=h/1000;
}
else if(n==2)
{
printf("Enter height in feet: ");
scanf("%f",&h);
h=h/3.2808;
}
else if(n==3)
{
printf("Enter height in meter: ");
scanf("%f",&h);
}
printf("1 Weight in pounds\n");
printf("2 Weight in kg\n");
scanf("%d",&n1);
if(n1==1)
{
printf("Enter weight in pounds");
scanf("%f",&w);
w=w*0.45359237;
}
else if(n1==2)
{
printf("Enter weight in kg: ");
scanf("%f",&w);
}
if((w<30)&&h<1.0)
{
 printf("BMI is Not applicable for below 30kg in weight or 1m in height");
 }
 else
 {
bmi=w/(h*h);
if(bmi<19.0)
{
printf("BMI is %.2f, You are Lean\n",bmi);
imp_weight = 19.0 * (h*h);
printf("Weights to be improved %.2f\n", imp_weight-w);
}
else if((bmi>19.0) && (bmi<26.0))
{
printf("BMI is %.2f, Normal",bmi);
}
else
{
printf("BMI is %.2f, You are obesity\n",bmi);
imp_weight_1 = 26.0 * (h*h);
printf("Weights to be improved %.2f\n", w-imp_weight_1);
}
}
getch();
}

