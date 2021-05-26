Запуск приёмника
starting the receiver:
```
gcc -o r reciever.c && ./r
```

Отправка сигнала
Sending a signal: 
```
gcc -o e emitter.c 
&& ./e <PID> <sig>
```
* PID - ID процесса приёмника
* SIGNAL - SIGUSR1 или SIGUSR2
