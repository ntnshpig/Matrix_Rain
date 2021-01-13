#include "../inc/header.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    initscr();
    
    if(argc == 2) {
        if((argv[1])[0] == '-' && (argv[1])[1] == 's') {
            mx_introduction();
            matrix_rain();
        }
        else {
            mx_printerr("usage: ./matrix_rain [-s]");
        }
    }
    else if(argc == 1) {
        matrix_rain();
    }
    else {
       mx_printerr("usage: ./matrix_rain [-s]");
    }

    endwin(); 

    return 0;
}
