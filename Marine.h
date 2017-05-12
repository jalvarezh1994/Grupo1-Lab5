<<<<<<< HEAD
#pragma once

#include "Pieza.h"
using namespace std;
class Marine : public Pieza{
	
	public:
		Marine();
		Marine(int, int, int);
		bool Mover (Pieza**, int, int);
=======
#include<Pieza.h>
#pragma once

class Marine : Pieza{
		
		public:
			Marine();
			Marine(int, int, int);
			bool mover(Pieza**, int, int);			

>>>>>>> 7b1a389fe489ac91c4cb485b95f04d3d92f3fe0c

};
