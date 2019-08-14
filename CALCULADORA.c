#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>




void MENU();
void SALIR();
void comprobacion();
void sumar();
void restar();
void multiplicar();
void dividir();
void raiz();
void pares();


int main (){
	
	
	char command[50];
	
	strcpy( command, "title CALCULADORA ");
	system(command);
	 
	MENU();

	system ("pause");
	return 0;
}
void SALIR(){
//SALIR DE LA OPERACION
	exit (-1);	
}
void MENU(){
	char seguir;
	int p;
		system ("cls");
	//MENU DE LA CALCULADORA
		 printf("1-SUMAR.\n2-RESTAR. \n3-MULTIPLICAR. \n4-DIVIDIR. \n5-RAIZ CUADRADA.\n6-PARES E IMPARES. \n7-SALIR \n\n");
		 printf ("Seleccione una OPERACION: ",p);
		 scanf ("%i",&p);

	//MENU DE LA CALCULADORA
		switch(p){
			case 1: sumar();break;
			case 2: restar();break;
			case 3: multiplicar();break;
			case 4: dividir();break;
			case 5: raiz();break;
			case 6:	pares();break;
			case 7: SALIR();break;
			default: printf("La opcion elegida es incorrecta.\n\n");
		Sleep (1000);
		return MENU();
				}
	
	
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
	
	printf ("%.2f + %.2f = %.2f\n\n",x,y,z);
		
	comprobacion();
	
	}while (seguir != 'n');

return MENU();
	
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
	
	printf ("%.2f - %.2f = %.2f\n\n",x,y,z);
	
	comprobacion();
	
	}while (seguir != 'n');

return MENU();
	
}
void multiplicar(){	
//OPERACION PARA MULTIPLICAR
		char seguir;
	float x,y,z;
	
	do{
	printf("\n\tMULTIPLICAR");
	printf ("\n Introduce un numero: ",x);
		scanf("%f",&x);
	printf ("Introduce un numero: ",y);
		scanf("%f",&y);
	
	z = x * y;
	
	printf ("%.2f * %.2f = %.2f\n\n",x,y,z);
	
	comprobacion();
	
	}while (seguir != 'n');

return MENU();
	
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
	
	printf ("%.2f / %.2f = %.2f\n\n",x,y,z);
	
	comprobacion();
	
	}while (seguir != 'n');
	
return MENU();
	
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
    printf("Raiz cuadrada: %f\n\n",n);
    
	comprobacion();
	
	}while (seguir != 'n');

return MENU();

}
void comprobacion(){ 

	// COMPROBACION PARA SEGUIR CON LA OPERACION
	char seguir,p;
	do{
	
	printf ("Quieres hacer otra operacion(s/n): ");
		fflush( stdin );
		scanf ("%c",&seguir);
	
	if(seguir == 's'){
		
	return 0;
		
	}
	
}while (seguir != 'n' );
Sleep (100);
return MENU();
	
}
void pares(){
	
		int x,y;
	printf("\n\tNUMEROS PARES E IMPARES");
	printf ("Introduce un numero para saber si es PAR o IMPAR: ");
	scanf ("%i",&x);
	
	y = x % 2;
	
	
	if (y == 0){
		printf ("El numero introducido es PAR, %i. \n\n",y);
	}
	else {
		printf ("El numero introducido es IMPAR, %i. \n\n",y);
	}
	
	comprobacion();
	
	return MENU();
	
}
	




