#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void MENU_BASICA();
void SALIR();
void comprobacion();
void comprobacion_area();
void sumar();
void restar();
void multiplicar();
void dividir();
void raiz();
void pares();
void tablas_de_multiplicar();
void MENU_AREAS();
void area_triangulo();
void area_rectangulo();
void MENU_PRINCIPAL();
void MENU_APUNTES();


int main (){
	
	char command[50];
	
	strcpy( command, "title CALCULADORA BASICA ");
	system(command);
	 
	MENU_PRINCIPAL();

	system ("pause");
	return 0;
}
void SALIR(){
//SALIR DE LA OPERACION
	exit (-1);	
}
void MENU_PRINCIPAL(){
	
	int p;
	
	system ("cls");
	
	printf("1-MENU DE OPERACIONES BASICAS. \n2-MENU DE AREAS. \n3-APUNTES. \n4-SALIR.\n\n");
	printf ("Seleccione una OPERACION: ");
		scanf("%i",&p);
	
	switch(p){
		case 1: MENU_BASICA();break;	
		case 2: MENU_AREAS();break;
		case 3: MENU_APUNTES();break;
		case 4: SALIR();break;	
		default: printf("La opcion elegida es INCORRECTA.\n\n");
	}
	Sleep (1000);	
}
void MENU_BASICA(){
	
	char seguir;
	int p;
	
		fflush(stdin);
		system ("cls");
		
	//MENU DE LA CALCULADORA
	
		 printf("1-SUMAR.\n2-RESTAR. \n3-MULTIPLICAR. \n4-DIVIDIR. \n5-RAIZ CUADRADA.\n6-PARES E IMPARES. \n7-VOVLER. \n8-SALIR. \n\n");
		 printf ("Seleccione una OPERACION: ");
			 scanf ("%i",&p);

	//MENU DE LA CALCULADORA
	
		switch(p){
			case 1: sumar();break;
			case 2: restar();break;
			case 3: multiplicar();break;
			case 4: dividir();break;
			case 5: raiz();break;
			case 6:	pares();break;
			case 7: MENU_PRINCIPAL();break;
			case 8: SALIR();break;
			default: printf("La opcion elegida es INCORRECTA.\n\n");
		}
		Sleep (1000);
		return MENU_PRINCIPAL();
}
void MENU_AREAS(){
	
	//MENU DE LAS AREAS 
	
	int p;
	
	system ("cls");
	printf("1-AREA DEL TRIANGULO. \n2-AREA DEL RECTANGULO. \n3-VOVLER. \n4-SALIR. \n\n");
	printf ("Seleccione una OPERACION: ");
		scanf ("%i",&p);
		
	switch (p){
		case 1: area_triangulo();break;
		case 2: area_rectangulo();break;
		case 3: MENU_BASICA();break;
		case 4: SALIR();break;
		default: printf("La opcion elegida es INCORRECTA.\n\n");
	}
	Sleep (1000);
	return MENU_PRINCIPAL();
}
void MENU_APUNTES(){

	int p;
	
	system ("cls");
	
	printf("1-TABLAS DE MULTIPLICAR. \n3-VOVLER. \n4-SALIR. \n\n");
	printf ("Seleccione una OPERACION: ");
		scanf ("%i",&p);
	
	switch (p){
		case 1: tablas_de_multiplicar();break;
		case 2: MENU_APUNTES();break;
		case 3: SALIR();break;
		default: printf("La opcion elegida es INCORRECTA.\n\n");
	}
	Sleep (1000);
	return MENU_PRINCIPAL();
}

















void sumar(){	

//OPERACION PARA SUMAR

	char seguir,f;
	float x,y,z;
	
	do{
		printf ("\n\tSUMA");
		printf ("\nIntroduce un numero: ",x);
			scanf("%f",&x);
		printf ("Introduce un numero: ",y);
			scanf("%f",&y);
	
		z = x + y;
	
		printf ("\n%.2f + %.2f = %.2f\n\n",x,y,z);
		
		comprobacion();
	
	}while (seguir != 'n');
	return 0;
}
void restar(){	

//OPERACION PARA RESTAR

	char seguir;
	float x,y,z;
	
	do{
		printf("\n\tRESTA");
		printf ("\nIntroduce un numero: ",x);
			scanf("%f",&x);
		printf ("Introduce un numero: ",y);
			scanf("%f",&y);
	
		z = x - y;
	
		printf ("\n%.2f - %.2f = %.2f\n\n",x,y,z);
	
		comprobacion();
		
	}while (seguir != 'n');
	return 0;
}
void multiplicar(){	

//OPERACION PARA MULTIPLICAR

	char seguir;
	float x,y,z;
	
	do{
		printf("\n\tMULTIPLICAR");
		printf ("\nIntroduce un numero: ",x);
			scanf("%f",&x);
		printf ("Introduce un numero: ",y);
			scanf("%f",&y);
	
		z = x * y;
	
		printf ("\n%.2f * %.2f = %.2f\n\n",x,y,z);
	
		comprobacion();
	
	}while (seguir != 'n');
	return 0;	
}
void dividir(){
	
//OPERACION PARA DIVIDIR

	char seguir;
	float x,y,z;
	
	do{
		printf("\n\tDIVIDIR");
		printf ("\nIntroduce un numero: ",x);
			scanf("%f",&x);
		printf ("Introduce un numero: ",y);
			scanf("%f",&y);
	
		z = x / y;
	
		printf ("\n%.2f / %.2f = %.2f\n\n",x,y,z);
	
		comprobacion();
	
	}while (seguir != 'n');
	return 0;
}
void raiz(){
	
	//OPERACION PARA RAIZ CUADRADA
	
	char seguir;
	do{
		float n;
		printf("\n\tRAIZ CUADRADA");
 	   printf("\nNumero: ");
			scanf("%f",&n);
  	  	n = sqrt(n);
  	  printf("\nRaiz cuadrada: %f\n\n",n);
    
		comprobacion();
	
	}while (seguir != 'n');
	return 0;
}
void comprobacion(){ 

	// COMPROBACION PARA SEGUIR CON LA OPERACION
	
	char seguir,p;
	do{
		printf ("\nQuieres hacer otra operacion(s/n): ");
			fflush( stdin );
			scanf ("%c",&seguir);
	
		if(seguir == 's'){
		
			return 0;	
		}
	}while (seguir != 'n' );
	Sleep (100);
	return MENU_BASICA();
}
void comprobacion_area(){
	
	// COMPROBACION PARA SEGUIR CON LA OPERACION
		
	char seguir,p;
	do{
		printf ("\nQuieres hacer otra operacion(s/n): ");
			fflush( stdin );
			scanf ("%c",&seguir);
	
			if(seguir == 's'){
		
				return 0;	
			}
	}while (seguir != 'n' );
	Sleep (100);
	return MENU_AREAS();
}
void pares(){
	
	//NUMERO PARES
		 
	char seguir;
	do{
		int x,y;
		printf("\n\tNUMEROS PARES E IMPARES");
		printf ("\nIntroduce un numero para saber si es PAR o IMPAR: ");
		scanf ("%i",&x);
	
		y = x % 2;
	
			if (y == 0){
				printf ("\nEl numero introducido es PAR, %i. \n\n",y);
			}
			else {
				printf ("\nEl numero introducido es IMPAR, %i. \n\n",y);
			}
		comprobacion();
	}while(seguir != 'n');	
		return 0;
}
void tablas_de_multiplicar(){
	
	int x,r, i;
	char seguir;
	
	do{
		printf ("\nIntroduce la tabla de multiplicar que quieras saber: ");
			scanf ("%i",&x);
		
		for (i = 0; i < 11; i++ ){
			
		r = x * i;
			
		printf ("\n%i * %i = %i\n",x,i,r);	
		}
		
		comprobacion();
		
	}while(seguir != 'n');
}	
void area_triangulo(){
		
	int base,altura,res;
	
	printf("Introduce la base: ");
		scanf("%i", &base);
	
	printf("Introduce la altura: ");
		scanf("%i", &altura);
	
	res = (base * altura) / 2;
	
	printf("El resultado es %i.\n", res);
	
	comprobacion_area();
	return 0;
}
void area_rectangulo(){
	int base1,base2,res;
	
	printf("Introduce la PRIMERA base: ");
		scanf("%i", &base1);
	
	printf("Introduce la SEGUNDA base: ");
		scanf("%i", &base2);
	
	res = (base1 * base2);
	
	printf("El resultado es %i.\n", res);
	
	comprobacion_area();
	return 0;
}

	
	
	
	



























