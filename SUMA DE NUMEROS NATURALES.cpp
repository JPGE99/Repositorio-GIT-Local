#include <iostream>
/* Suma de los primeros N numeros naturales: Escribre un programa que solicite al usuario un numero entero positivo N 
y luego calcule la suma de los primeros N numeros naturales. 
Alumno: Jean Paul Gonzalez Erenas 
Actividad: Producto 5  Algoritmos de seleccion multiple 
Fecha de entrega 09/03/2025	*/

void sumaNumerosNaturales();

int main () {
	char respuesta; 
	
	do{
		sumaNumerosNaturales ();
		std::cout <<"¿Desea realizar la suma de otros numeros (s/n)";
		std::cin >> respuesta;  
	} while (respuesta == 's' || respuesta == 'S'); 
	
	std::cout << "Gracias por utilizar el programa!" << std::endl;
	return 0;
}

void sumaNumerosNaturales(){ 
	int num1, opcion;

	std::cout <<"Ingrese el numero que desea verificar: " << std::endl;
	std::cin >> num1; 
	
	if (num1 <= 0) {
		std::cout <<"Porfavor ingrese un numero entero que sea positivo y mayor que 0." << std::endl;
	}
	
	std::cout <<"Seleccione El ciclo a utilizar para realizar la operacion"<< std::endl;
	std::cout << "1.Ciclo for" << std::endl;
	std::cout << "2.Ciclo while" << std::endl;
	std::cout << "3.Ciclo Do while" << std::endl;
	std::cout << "Seleccione una opcion, 1, 2 0 3: " <<std::endl;
	std::cin >> opcion;

	int suma = 0; 
	int i;
	switch (opcion) {
		case 1: 
		//Problema resuelto utilizando ciclo for
		for ( i = 1; i<= num1; ++i){
			suma +=i;
		}
		std::cout << "La suma de los primeros " << num1 << " Numeros naturales con ciclo for es: " << suma << std::endl;
		break;
		
		case 2: 
		//Problema resuelto utilizando ciclo while
		suma = 0; 
		i = 1; 
		while ( i <= num1){
			suma += i; 
			i++;
		}
		std::cout << "La suma de los primeros " << num1 << " Numeros naturales con ciclo while es: " << suma << std::endl;
		break; 
		
		case 3:
		//Problema utilizando ciclo do while
		suma = 0; 
		i = 1;
		do { 
			suma += i; 
			i++; 
		} while (i <= num1); 
		std::cout << "La suma de los primeros " << num1 << " Numeros naturales en ciclo do while es: " << suma << std::endl;	
		break;
		
		default: 
		std::cout << "Opcion no valida. por favor elija entre 1, 2 0 3. " <<std::endl;
		break;
	}
}
