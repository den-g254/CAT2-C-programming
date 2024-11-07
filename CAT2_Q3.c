//CAT3:income program
/*
Author:Denzel Gitonga Mugendi
Reg No:CT101/G/24518/24
Date:7/11/2024
*/

#include <stdio.h>

int main(){
	float hours_Worked;
	float hourly_Wage;
	float gross_Pay;
	float taxes;
	float net_Pay;
	float overtime_Hours;
	
	printf("Enter hours worked in a week:");
	scanf("%f",&hours_Worked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourly_Wage);
	
	if(hours_Worked>40){
		overtime_Hours=hours_Worked-40;
		gross_Pay=(40*hourly_Wage)+(overtime_Hours*hourly_Wage*1.5);
	}
	else{
		gross_Pay=hours_Worked*hourly_Wage;
	}
	
	if(gross_Pay<=600){
		taxes=gross_Pay*0.15;
	}
	else{
		(gross_Pay >=601);
		taxes=(600*0.15)+((gross_Pay-600)*0.20);
	}
	net_Pay=gross_Pay-taxes;
	
	
    printf("Hours Worked  %.2f\n",hours_Worked);
    printf("Hourly Wage  %.2f\n",hourly_Wage);
	printf("Gross pay  %.2f\n",gross_Pay);
	printf("Taxes  %.2f\n",taxes);
	printf("Net pay  %.2f\n",net_Pay);
	
	return 0;
} 