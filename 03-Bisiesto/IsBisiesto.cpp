/******************************************
*
*  Trabajo Práctico N° 3 - Años Bisiestos
*
*  por Fernando Gustavo Riganti (159.146-0)
*
*
*******************************************/


// Atención! Asumimos que se ingresan años superiores a 1582, no negativos. Años anteriores a
// 1852 no son ni bisiestos ni no bisiestos, por lo que se incorpora un "assert" dentro de la 
// función que nos de error si el año ingresado no cumple con esto.

#include <cassert>


bool IsBisiesto(unsigned year);  // Siempre mayores o iguales a 1582


int main ()
{	
	assert(IsBisiesto(2000) == true);
	assert(IsBisiesto(2004) == true);
	assert(IsBisiesto(1990) == false);
	assert(IsBisiesto(1992) == true);
	assert(IsBisiesto(2020) == true);
	assert(IsBisiesto(1900) == false);
}

bool IsBisiesto(unsigned year)
{
	assert(year >= 1582);
	return year % 4 == 0 and ((year % 100 == 0 and year % 400 == 0) or !(year % 100 == 0));   
}

