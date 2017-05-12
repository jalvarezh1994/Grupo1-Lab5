#pragma once

#include "Pieza.h"
using namespace std;
class General : public Pieza{
	
	public:
		General();
		General(int, int, int);
		bool Mover (Pieza**, int, int);

};
