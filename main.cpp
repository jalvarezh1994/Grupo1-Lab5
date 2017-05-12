#include <iostream>
#include <ncurses.h>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"

using namespace std;

void imprimeMatriz(Pieza **,int,int);

int main(){
	int n=8;
	Pieza **pm;
        int filas=n;
        int columnas=n;
        pm = new Pieza* [filas];
        for (int i = 0; i < filas; i++) {
                pm[i] = new Pieza[columnas];
        }
	General p(1,1,1);
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
	/*		if(){
				mvprintw(i,j,"a")
			}*/
                }
        }
}
