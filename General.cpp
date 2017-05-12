
#include "General.h"
#include "Pieza.h"
General::General(){

}


General::General(int x1, int y1, int color1){
	x = x1;
	y = y1;
	color = color1;
			
}


bool General::Mover(Pieza **mp, int x, int y, int x0, int y0){
	//PIEZA NEGRA 
	if (mp[x][y].getColor()==1){
		//HACIA ADELANTE
		if (x>x0 && y==y0){
			if (mp[x-1][y].getColor()==2)
				return true;
			else
				return false;
		}
		//HACIA ATRAS
		if (x<x0&&y==y0){
			if (mp[x+1][y].getColor()==2)
            return true;
         else
            return false;
			}
		//izquierda
		if (x=x0 && y<y0){
			if (mp[x][y-1].getColor()==2)
            return true;
         else
            return false;
		}
		//derecha
		if (x=x0 && y>y0){
         if (mp[x][y+1].getColor()==2)
            return true;
         else
            return false;
      }
		//diagonal
		if (x==x0+1 && y == y0+1){
			if (mp[x-1][y-1].getColor()==2)
				return true;
			else
				return false;

		}
			
		
		
	}//FIN PIEZA NEGRA
	
	
}
