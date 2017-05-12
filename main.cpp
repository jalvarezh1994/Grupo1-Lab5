#include <iostream>
#include <ncurses.h>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"

using namespace std;

void imprimeMatriz(Pieza **,int,int);
void rellenarMatriz();

int main(){
	int n=8;
	Pieza **pm;
        int filas=n;
        int columnas=n;
        pm = new Pieza* [filas];
        for (int i = 0; i < filas; i++) {
                pm[i] = new Pieza[columnas];
        }

	Pieza blanco(1,1,0);
	Pieza negro(1,1,1);
	Pieza vacio(1,1,2);
	for(int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			pm[i][j]=vacio;
		}
	}
	
	pm[0][1]=negro;
	pm[0][3]=negro;
	pm[0][5]=negro;
	pm[0][7]=negro;
	pm[1][0]=negro;
	pm[1][2]=negro;
	pm[1][4]=negro;	
	pm[1][6]=negro;
	pm[2][1]=negro;
	pm[2][3]=negro;
	pm[2][5]=negro;
	pm[2][7]=negro;

	pm[5][0]=blanco;
        pm[5][2]=blanco;
        pm[5][4]=blanco;
        pm[5][6]=blanco;
        pm[6][1]=blanco;
        pm[6][3]=blanco;
        pm[6][5]=blanco;
        pm[6][7]=blanco;
        pm[7][0]=blanco;
        pm[7][2]=blanco;
        pm[7][4]=blanco;
        pm[7][6]=blanco;

	initscr();
	int c,x,x0,y,y0;
	do{
		refresh();
		start_color();
		init_pair(1,COLOR_WHITE,COLOR_BLUE);
		init_pair(2,COLOR_BLACK,COLOR_BLUE);
		init_pair(3,COLOR_RED,COLOR_RED);	
		imprimeMatriz(pm,8,8);
		
		getch();
		move(10,0);
		endwin();

		cout<<"x: ";
                cin>>x;
		cout<<"y: ";
		cin>>y;
		cout<<"x0: ";
		cin>>x0;
		cout<<"y0: ";
		cin>>y0;
		
		if(pm[x0][y0].Mover(pm,x,y,x0,y0)==true){
			if(pm[x][y].getColor()==2){
				pm[x][y].setColor(c[x0][y0].getColor());
			}
		}
	}while(c!=27);
	return 0;
}

void imprimeMatriz(Pieza **pm,int filas,int columnas){
	for(int i=0;i<filas;i++){
        	for(int j=0;j<columnas;j++){
			if(pm[i][j].getColor()==0){
				attron(COLOR_PAIR(1));
				mvprintw(i*2+1,j*2+1,"O");
				attroff(COLOR_PAIR(1));
			}else if(pm[i][j].getColor()==1){
				attron(COLOR_PAIR(2));
				mvprintw(i*2+1,j*2+1,"X");
				attroff(COLOR_PAIR(2));
			}else{
				attron(COLOR_PAIR(3));
                                mvprintw(i*2+1,j*2+1,"-");
                                attroff(COLOR_PAIR(3));
			}
                }
        }
	mvprintw(25,0,"Presione enter para la siguiente instrucción");
}

