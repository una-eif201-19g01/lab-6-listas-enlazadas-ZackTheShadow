//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "ListaLibros.h"
#include <sstream>

ListaLibros::ListaLibros()
{
	primero = nullptr;
	actual = nullptr;
}

ListaLibros::~ListaLibros()
{
	while (primero != nullptr) 
	{
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaLibros::insertarInicio(Libro& _libro) 
{
	actual = new Nodo(_libro, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaLibros::insertarFinal(Libro& _libro) 
{
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_libro, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_libro, nullptr));
	}
}

bool ListaLibros::eliminarInicio()
{
	if (primero == nullptr) 
	{
		return false;
	}
	else
	{
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

bool ListaLibros::eliminarFinal()
{
	actual = primero;
	if (primero == nullptr)
	{
		return false;
	}
	else
	{
		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}
		delete actual;

		return true;
	}
}

int ListaLibros::totalNodos() {
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool ListaLibros::listaVacia() {
	return primero == nullptr;
}

std::string ListaLibros::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

bool ListaLibros::encontrado(int id)
{
	actual = primero;
	while (actual != NULL)
	{
		if (actual->getLibro->getId() == id)
		{
			return true;
		}

		else
		{

			actual->getSiguiente();
		}
	} 

	return false;
}

int ListaLibros::obtenerLibro(int id)
{
	actual = primero;
	while (actual != NULL)
	{
		if (actual->getLibro->getId() == id)
		{
			return 1;
		}
		else
		{
			actual->getSiguiente();
		}
	}
	return 2;
}


Nodo* ListaLibros::getPrimero() 
{
	return primero;
}

void ListaLibros::setPrimero(Nodo* primero) 
{
	ListaLibros::primero = primero;
}

Nodo* ListaLibros::getActual() 
{
	return actual;
}

void ListaLibros::setActual(Nodo* actual) {
	ListaLibros::actual = actual;
}