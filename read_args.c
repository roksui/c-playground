#include<stdio.h>

int main() {
       
    int ch;
    int whitespace_cnt = 0;
    while ((ch = fgetc(stdin)) != '\n') {
        if (ch == ' ') {
            whitespace_cnt++;
	}
    }

    printf("%d\n", whitespace_cnt);

    return 0;
}
