
#include "Marine.h"
#include "Pieza.h"

Marine::Marine(){

}


Marine::Marine(int x1, int y1, int color1){
        x = x1;
        y = y1;
        color = color1;

}

bool Marine::Mover(Pieza **mp, int x, int y, int x0, int y0){
	//MOVIMIENTO PIEZA NEGRA
		if (mp[x0][y0].getColor()==1){
			if ((x==y&&x==x+1) ||(x==x0+1&&y==y0-1)){

         if (mp[x][y].getColor()==2)
            return true;
			else if (mp[x][y].getColor()==1)
				return true;
			else
				return false;
			
      	}else
				return false;
			
		//MOVIMIENTO PIEZA BLANCA
		} else if (mp[x0][y0].getColor()==0){

			if ((x==x0-1 && y== y0+1)|| (x==x0-1 && y== y0-1)){
					if ((mp[x][y].getColor()==2) || (mp[x][y].getColor()==0))
						return true;
					else
						return false;
			}	
		
		}else{
			return false;
		}



}

