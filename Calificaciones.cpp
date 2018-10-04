/*Calificaciones*/
#include<stdio.h>
#include<conio.h>

main ()
{
	float numero1, numero2, numero3, numero4, numero5, promedio;
	printf ("Ejercicio de promedio \n");
	printf ("Dame el primer numero: \n");
	scanf ("%f",&numero1);
	
	printf ("Dame el segundo numero: \n");
	scanf ("%f",&numero2);
	
	printf ("Dame el tercer numero: \n");
	scanf ("%f",&numero3);
	
	printf ("Dame el cuarto numero: \n");
	scanf ("%f",&numero4);
	
	printf ("Dame el quinto numero: \n");
	scanf ("%f",&numero5);

	
	promedio=(numero1+numero2+numero3+numero4+numero5)/5;

if (promedio<=5.9&&promedio>=0) 
{
printf ("REPROBADO \n");
}
else if (promedio>=5.9&&promedio<=10)
{
printf ("APROBADO \n");
}

/*Puedes poner .y la cantidad, para decirle al programa cuantos decimales mostrarte*/
getch();
}
