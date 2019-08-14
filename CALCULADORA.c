#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>




void MENU();
void SALIR();
void sumar();
void restar();
void multiplicar();
void dividir();
void raiz();
void comprobacion();

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
		 printf("1-Sumar.\n2-Restar. \n3-Multiplicar. \n4-Dividir. \n5-Raiz Cuadrada.\n6-SALIR.\n\n");
		 printf ("Seleccione una OPERACION: ",p);
		 scanf ("%i",&p);

	//MENU DE LA CALCULADORA
		switch(p){
			case 1: sumar();break;
			case 2: restar();break;
			case 3: multiplicar();break;
			case 4: dividir();break;
			case 5: raiz();break;
			case 6: SALIR();break;
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
	
	printf ("\n Introduce un numero: ",x);
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
	
	printf ("\n Introduce un numero: ",x);
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
	
	printf ("\n Introduce un numero: ",x);
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
    printf("\nNumero: ");
    scanf("%f",&n);
    n = sqrt(n);
    printf("Raiz cuadrada: %f\n\n",n);
    
	comprobacion();
	
	}while (seguir != 'n');

return MENU();

}
void comprobacion(){

	
	char seguir;
	do{
	
	printf ("Quieres hacer otra operacion(S/N): ");
		fflush( stdin );
		scanf ("%c",&seguir);
	
	if(seguir == 'S' || seguir == 's'){
		
		return sumar();
		
	}
	
}while (seguir != 'n');

return MENU();
	
}
	
	




