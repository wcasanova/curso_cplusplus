//################################################################################
//Suponiendo que hemos introducido una cadena por teclado que representa una frase 
//(palabras separadas por espacios), realiza un programa que cuente cuantas 
//palabras tiene.
//################################################################################
//An�lisis
//Tengo que contar cuantos espacios hay en la frase, y tendr� el n�mero + 1 palabras.
//No debo contar los espacios que puada haber antes de la primera palabra, y los 
//espacios al final de la frase. Adem�s si entre palabras hay varios espacios s�lo
//puedo contar 1.
// Datos de entrada: Frase
// Informaci�n de salida: contador de palabras
// Variables: cad (Caracter), posicion, cont (enteros)
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	int posicion=0,cont=0;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	//Recorro los posibles espacios al principio de la cadena
	while(cad[posicion]==' ')
		posicion++;
	
	//Desde el primer caracter distinto de espacio
	for(posicion=posicion;posicion<cad.length();posicion++)
	{
		if(cad[posicion]==' ')
		{
			cont++;
			//No tengo en cuanta losposibles espacios que haya entre las palabras
			while(cad[posicion]==' ' && posicion<=cad.length())
				posicion++;
		}
	}
	//Si no acaba en espacios tengo que contar la �ltima palabra
	if(cad.back()!=' ')
		cont++;
	
	cout << "La frase tiene " << cont <<" palabras.";
	return 0;
}
