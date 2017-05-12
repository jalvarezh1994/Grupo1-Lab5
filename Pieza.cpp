
#include "Pieza.h"

Pieza::Pieza(){

}

Pieza::Pieza(int x1, int y1, int color1){
			x = x1;
			y = y1;
			color = color1;		
}

int Pieza::getColor(){
   return color;
}

int Pieza::getX(){
   return x;
}

int Pieza::getY(){
   return y;
}

void Pieza::setColor(int c){
   color = c;
}

void Pieza::setX(int newX){
   x = newX;
}

void Pieza::setY(int newY){
   y = newY;
}

