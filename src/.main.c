#include <ncurses.h>

int main(){
    int c;
    raw();
    noecho();
    cbreak();
    initscr();
    getch();
    refresh();
    endwin();
    return 0;
}
