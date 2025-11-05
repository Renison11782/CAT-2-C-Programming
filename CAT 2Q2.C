/*
NAME : ROBINSON RENISON
REG: CT100/G/26162/25
DES : CAT 2 Q2.C
*/
#include <stdio.h>

int main()
{float hours_worked, hourly_wage;
float gross_pay, taxes, net_pay;
float overtime_hours, regular_hours;

printf("Enter hours worked in a week;\n");
scanf("%f",&hours_worked);

printf("Enter hourly wage:");
scanf("%f",&ahourly_wage);

if(hours_worked > 40){
	regular_hours = 40;
	overtime_hours = hours_worked - 40;
	gross_pay = (regular_hours * hourly_wage) +(overtime_hours * hourly_wage *  1.5);
	}else
	{
		gross_pay = hours_worked * hourly_wage;
		overtime_hours = 0;
	}
	if(gross_pay <= 600){
		taxes = gross_pay * 0.15;
	}else
	{
		taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
	}
	net_pay = gross_pay - taxes;
	
	printf("\n---Payroll Summary----\n");
	printf("Hours worked: %.2f\n", hours_worked);
	printf("Hourly wage : ksh%.2f\n", hourly_wage);
	
	if(overtime_hours > 0){
		printf("Overtime hours: %.2f\n", overtime_hours);
	}
	printf("Gross Pay: ksh%.2f\n",gross_pay);
	printf("Taxes:     ksh%.2f\n",taxes);
	printf("Net Pay:   ksh%.2f\n",net_pay);
	printf("---------------------------\n");
	return 0;
}