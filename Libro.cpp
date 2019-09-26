//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro() 
{
}

Libro::Libro(int id) : id(id)
{
}

Libro::~Libro() 
{
}

int Libro::getId()
{
	return id;
}

void Libro::setId(int id) 
{
	Libro::id = id;
}

std::string Libro::toString() 
{
	std::string resultado;

	resultado = "- id: " + std::to_string(id) + "\n";
	return resultado;
}