//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

#include <string>
#include <ostream>

class Libro {
		
	int id;

	public:
		Libro();

		Libro(int id);

		virtual ~Libro();

		int getId();

		void setId(int id);

		std::string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
