#include "../inc/header.h"

void matrix_rain() {
	mx_initcolor();

	int speed = 100;
	int max_y = 0;
	int max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);

	int start[max_x];
    int lenght[max_x];
    int arr_start[max_x];

	for (int i = 0; i < max_x; i++) {
        start[i] = -1 * (rand() % 80);
        arr_start[i] = start[i];
        lenght[i] = (rand() % 50  - 1);
    }

	unsigned int stime;
	long ltime = time (NULL);
	stime = (unsigned int) ltime / 2;
	srand(stime);
	int color = 2;
	while(1) {
		for (int i = 0; i < max_x; i++) {
			wchar_t output_char = (double)(rand() % 93 + 33);
			if(i % 2 == 0) {
				output_char = ' ';
			}

			mvaddch(arr_start[i] + 1, i, output_char | COLOR_PAIR(1));      
            mvaddch(arr_start[i], i, output_char | COLOR_PAIR(color));
            mvaddch(arr_start[i] - lenght[i], i, ' ' | COLOR_PAIR(color));

			if (arr_start[i] - lenght[i] > max_y) {
                arr_start[i] = start[i];
            }
            arr_start[i]++;

		}
		usleep(1000 * speed);
        nodelay(stdscr,TRUE);
        noecho();
		char a = getch();
		if (a == 'q') {
			clear();
			return;
		}
		switch (a)
		{
		case '1':
			color = 1;
			break;
		case '2':
			color = 2;
			break;
		case '3':
			color = 3;
			break;
		case '4':
			color = 4;
			break;
		case '5':
			color = 5;
			break;
		case '6':
			color = 6;
			break;
		case '7':
			color = 7;
			break;
		case '+':
			if (50 < speed)
				speed = speed - 10;
			break;
		case '-':
			if (400 > speed)
				speed = speed + 10;
			break;
		default:
			break;
		}

		refresh();
	}
	clear();
}
