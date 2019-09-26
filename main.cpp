#include <iostream>
#include "Libro.h"
#include "ListaLibros.h"

int main() {

	int buscaId = 0;
	Libro libro1(001);
	Libro libro2(002);
	Libro libro3(003);
	Libro libro4(004);
	Libro libro5(005);
	Libro libro6(006);


	ListaLibros* listaLibros = new ListaLibros();

	listaLibros->insertarInicio(libro1);
	listaLibros->insertarInicio(libro2);
	listaLibros->insertarInicio(libro3);
	listaLibros->insertarInicio(libro4);
	listaLibros->insertarInicio(libro5);

	std::cout << "Lista de Libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

	listaLibros->eliminarInicio();
	std::cout << "Lista de profesores [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

	listaLibros->insertarFinal(libro6);
	std::cout << "Lista de profesores [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

	delete(listaLibros);
	std::cout << "Lista de profesores [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

	std::cout << "Inserte el id del libro que desea buscar" << std::endl;
	std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
	std::cin >> buscaId;

	if (listaLibros->obtenerLibro(buscaId) == 1) {

		std::cout << "El libro es: " + listaLibros->getActual->toString() << std::endl;
	}
	else
	{
		std::cout << "No existe" << std::endl;
	}
	return 0;
}