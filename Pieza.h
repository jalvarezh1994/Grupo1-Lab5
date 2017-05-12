#pragma once
class Pieza{
	protected:
		int x;
		int y;
		int color;//0-blanco  1-negro  2--vacío

	public:

		Pieza();
		Pieza(int, int, int);
		int getColor();
		void setColor(int);
		int getX();
		int getY();
		void setX(int);
		void setY(int);
	
		
};
