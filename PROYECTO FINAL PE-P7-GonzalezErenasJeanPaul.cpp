#include <iostream>
/*El programa debera iniciar con el mensaje "Hola soy (Jean Paul Gonzalez Erenas) y este es mi trabajo final para la materia de
programacion Estructurada. 
-El Programa debera preguntar al usuario si quiere utilizar uno de los siguientes problemas, enumerados de la siguiente manera: 
1.-Imprimir un "Hola Mundo" (El programa solo imprimira el mensaje)
2.-Evaluacion de una materia(Solicite al usuario ingresar su calificacion numerica (0-100) y muestre en la pantalla si ha aprobado 
(calificacion mayor o igual a 60) o a preprobado)
3.-Escribir y leer un arreglo (El programa debera soliciarle al usuario que llene un arreglo de 5 espacios con numeros enteros y despues el programa los leera)
4.-Convertir una longitud (el programa convertirá una longitud dada en metros a otra unidad de longitud como centímetros, 
pulgadas, pies o yardas, el usuario deberá especificar a cuál)
5.-Sumatoria (El programa debera sumar todos los numeros desde 1 hasta el numero dado por el usuario)
6.-Fin del programa(al seleccionar la opcion 6 el programa debera terminar y decir el siguiente mensaje "Este fue mi trabajo final para la materia de programacion estructurada")
Alumno: Jean Paul Gonzalez Erenas 
Actividad: Producto 7 proyecto final 
Fecha de entrega: 23/03/2025*/


void proyectoFinal(); 
void holaMundo();     
void evaluacionMateria(); 
void arreglo5Numeros();
void metrosXunidad();
void sumatoria();

int main() {
    proyectoFinal();  
    return 0;
}

void proyectoFinal() {
	char respuesta; 
    std::string nombre = "Jean Paul Gonzalez Erenas";  
    std::cout << "Hola soy " << nombre << " y este es mi trabajo final para la materia de programacion estructurada" << std::endl;
	std::cout << std::endl;
    int opcion;
    bool continuar = true;

    while (continuar) {
        std::cout << " Elija alguna de las opciones: " << std::endl;
        std::cout << "1.-Imprimir 'Hola Mundo'" << std::endl;
        std::cout << "2.-Evaluacion de una materia" << std::endl;
        std::cout << "3.-Escribir y leer un arreglo de 5n" << std::endl;
        std::cout << "4.-Convertir una longitud" << std::endl;
        std::cout << "5.-Sumatoria hasta numero dado" << std::endl;
        std::cout << "6.-Fin del programa" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                 holaMundo();  
                break;
            case 2:
            	evaluacionMateria();
            	break;
            case 3: 
            	arreglo5Numeros();
            	break;
            case 4: 
            	metrosXunidad();
            	break;
            case 5: 
            	sumatoria();
            	break;
            case 6:
            	std::cout<<"Este fue mi trabajo final para la materia de programacion Estructurada";
                continuar = false;  
                break;
            default:
                std::cout << "OPCION NO VALIDA" << std::endl;
        }
          if (continuar) {
            char seguir;
            std::cout << "\n¿Quieres realizar otra operación? (s/n): ";
            std::cout << std::endl;
            std::cin >> seguir;

            if (seguir == 'n' || seguir == 'N') {
                continuar = false;
                std::cout << "Este fue mi trabajo final para la materia de Programacion Estructurada" << std::endl;
   			}
		}
	}
}

//OPCION 1 HOLA MUNDO 
void holaMundo() {
	std::cout << std::endl;
    std::cout << "Hola mundo" << std::endl;
	std::cout << std::endl;
}

//OPCION 2 EVALUACION DE MATERIA
void evaluacionMateria(){
	int cal; 
	do{
	std::cout <<"Ingrese la calificacion del alumno del 0-100: "; 
	std::cin >> cal;
	if (cal <0 || cal >100)
	{
		std::cout<<"Calificacion no valida. debe ingresar una calificaicon dentro del rango de 0 a 100. intente nuevamente: " <<std::endl;
	}
	} while (cal < 0 || cal > 100);
	
	if (cal < 60)
	{
		std::cout<<"El alumno esta reprobado con una calificacion de: " << cal <<std::endl;
	}
	
	if(cal >=60)
	{
		std::cout <<"El alumno esta aprobado con una calificacion de: " << cal <<std::endl;
	}
} 

//OPCION 3 ARREGLO DE 5 NUMEROS 
void arreglo5Numeros(){
	int arreglo[5];

    std::cout << "Ingresa 5 numeros enteros:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Los numeros ingresados son: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
	
}

//OPCION 4 CONVERTIR LONGITUD 
void metrosXunidad(){
	
	double metros;
	int opcion;
	
	std::cout <<"Ingrese la cantidad de metros que desea convertir: "<<std::endl; 
	std::cin >> metros;
	std::cout <<"Ingrese la unidad metrica a la que quiere convertir los metros ingresados: "<<std::endl;
	std::cout << " 1.Centimetros "<<std::endl;
	std::cout << " 2.Pulgadas "<<std::endl;
	std::cout << " 3.Pies "<<std::endl;
	std::cout << " 4.Yardas "<<std::endl;
	std::cout <<"Opcion: ";
	std::cin >> opcion; 
	
	switch (opcion) {
		case 1: 
			std::cout << "La conversion de: "<< metros << " metros ingresados a centimetros es: " << metros * 100 << " centimetros"<<std::endl; 
			break; 
		case 2: 
			std::cout << " La conversion de: " << metros << " metros ingresados a pulgadas es: " << metros * 3.28 << " pies"<<std::endl;
			break;
		case 3: 
			std::cout << " La conversion de: " << metros << " Metros ingresados a Pies: " << metros * 39.37 << " pulgadas"<<std::endl;
			break;
		case 4: 
			std::cout << " La conversion de: " << metros << " Metros ingresados a yardas es: " << metros * 1.093 << " yardas"<<std::endl;
			break;
			default:
				std::cout <<"Opcion no valida."<<std::endl;
	}
}


//OPCION 5 SUMATORIA DE NUMERO INGRESADO
void sumatoria() {
    int numero;
    std::cout << "Ingresa un numero: ";
    std::cin >> numero;

    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

    std::cout << "La sumatoria de los numeros del 1 hasta " << numero << " es: " << suma << std::endl;
}
