#include <iostream>
#include <ncurses.h>
using namespace std;
int main(){
	initscr();
	mvprintw(3,7,"Hello");
	refresh();
	getch();
	endwin();
}
