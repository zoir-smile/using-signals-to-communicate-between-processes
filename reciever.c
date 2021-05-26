/*Бесконечно выводит строку "Waiting for signal \n"
  и ожидает сигналов SIGUSR1 и SIGUSR2.
  При получении каждого из сигналов меняет выводимую строку.*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

char str[30] = "Waiting for signal \n";
void hdl (int sig) {
	switch (sig) {
	case SIGUSR1:
		strcpy(str, "Received SIGUSR1 \n");
		break;
	case SIGUSR2:
		strcpy(str, "Received SIGUSR2 \n");
		break;
	}
}

int main() {
	signal(SIGUSR1, hdl);
	signal(SIGUSR2, hdl);
	while (1) {
		printf("PID: %d and %s", (int)getpid(), str);
		sleep(1);
	}
	return 0;
}

