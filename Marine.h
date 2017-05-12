#pragma once

#include "Pieza.h"
using namespace std;
class Marine : public Pieza{
	
	public:
		Marine();
		Marine(int, int, int);
		bool Mover (Pieza**, int, int);

};
