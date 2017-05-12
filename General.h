#pragma once

#include<Pieza.h>

class General : public Pieza{
	
	public:
		General();
		General(int, int);
		mover (Pieza**, int, int);

};
