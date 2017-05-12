#include <iostream>
#include <ncurses.h>
//#include "Pieza.h"

int main(){
/*	Pieza **pm;
        int filas=n;
        int columnas=n;
        pm = new Pieza* [filas];
        for (int i = 0; i < filas; i++) {
                pm[i] = new int[columnas];
        }
*/
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);
	attron(COLOR_PAIR(1));
	mvprintw(1,2,"a");
	attroff(COLOR_PAIR(1));
	getch();
	endwin();
	return 0;
}


void imprimeMatriz(Pieza **pm,int filas,int columnas){
        for(int i=0;i<filas;i++){
                for(int j=0;j<columnas;j++){
                        
                }
        }
}
