/*Отправляет сигнал SIGUSR1 или SIGUSR2 процессу, который выбирается по идентефикатору*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

int main(int argc, char *argv[]){
	if (argc == 3){
		if ((strcmp(argv[2], "SIGUSR1") == 0) || (strcmp(argv[2], "SIGUSR2") == 0)){
			int pid = atoi(argv[1]);
			if (strcmp(argv[2], "SIGUSR1") == 0){
				kill(pid, SIGUSR1);
				printf("Signal send \n");
			} else if (strcmp(argv[2], "SIGUSR2") == 0) {
				kill(pid, SIGUSR2);
				printf("Signal send \n");
			}
		} else {
			printf("Argument error \n");
		}
	} else {
		printf("Argument error \n");
	}
}
