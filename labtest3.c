/*
Dylan Kieran
C15321906
DT228/1
23/02/2016
Lab test 3
Compiler: Dev-C++ 5.11
Program that converts temperature readings
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

//Prototypes
float convert_temp(float[]);
void in_Kelvin(float*);

main()
{
	//Declare Variables
	int i = 0;
	float average_celsius = 0;
	float temperature_array[SIZE] = {30.0,40.02,10.11,2.0,4.23};
	
	//Call function convert_temp()
	average_celsius = convert_temp(temperature_array);
	
	//Display return Celsius average
	printf("\n\nAverage celsius = %.2f",average_celsius);
	
	//Call function Kelvin()
	in_Kelvin(&average_celsius);
	
	//Display average converted to kelvin
	printf("\nThe average converted into kelvin = %2.f",average_celsius);
}

//Implement function convert_temp()
float convert_temp(float temp_array[])
{
	//Declare Variables
	int i = 0;
	float average = 0;
	
	//Create side by side style table
	printf("Celsius \t Fahrenheit");
	
	//For loop to display Temperature in Celsius then convert to fahrenheit and display that
	for(i=0; i<SIZE; i++)
	{
		//Display Celsius
		printf("\n %.1f",temp_array[i]);
		
		//Convert to fahrenheit
		temp_array[i] = ((((temp_array[i])*9) /5) + 32);
		
		//Display Fahrenheit
		printf(" \t \t %.1f",temp_array[i]);
	}

	//For loop to calculate celsius average and return celsius average to main
	for(i=0; i<SIZE; i++)
	{
		average = average + (*temp_array+i) /SIZE;
		return average;
	}
	
}

//Implement function in_Kelvin()
void in_Kelvin(float *average)
{
	*average = (*average + 273);
}
