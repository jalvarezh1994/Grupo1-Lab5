#include <iostream>
#include <ncurses.h>
<<<<<<< HEAD
#include "Pieza.h"
#include "General.h"
#include "Marine.h"

using namespace std;

void imprimeMatriz(Pieza **,int,int);
=======
<<<<<<< HEAD
#include "Pieza.h"
#include "General.h"
#include "Marine.h"
=======
//#include "Pieza.h"
>>>>>>> 79d55fbe34ff9d27537e7f34883553ef26bec91b
>>>>>>> 7b1a389fe489ac91c4cb485b95f04d3d92f3fe0c

int main(){
	int n=8;
	Pieza **pm;
        int filas=n;
        int columnas=n;
        pm = new Pieza* [filas];
        for (int i = 0; i < filas; i++) {
                pm[i] = new Pieza[columnas];
        }
	Pieza p(0,0,0);
	pm[0][0]=p;
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);
	attron(COLOR_PAIR(1));
	imprimeMatriz(pm,8,8);
	attroff(COLOR_PAIR(1));
	getch();
	endwin();
	return 0;
}


void imprimeMatriz(Pieza **pm,int filas,int columnas){
        for(int i=0;i<filas;i++){
                for(int j=0;j<columnas;j++){
			if(){
				mvprintw(i,j,"a")
			}
                }
        }
}
