#include <iostream>
#include <ncurses.h>
<<<<<<< HEAD
#include "Pieza.h"
#include "General.h"
#include "Marine.h"
=======
//#include "Pieza.h"
>>>>>>> 79d55fbe34ff9d27537e7f34883553ef26bec91b

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
	init_pair(1,COLOR_RED,COLOR_BLACK);
	attron(COLOR_PAIR(1));
	mvprintw(1,2,"a");
	attroff(COLOR_PAIR(1));
	getch();
	endwin();
	return 0;
}
/*
void imprimeMatriz(Pieza **pm,int filas,int columnas){
        for(int i=0;i<filas;i++){
                for(int j=0;j<columnas;j++){
                        cout<<pm[i][j]<<"\t";
                }
                cout<<endl;
        }
}
*/
