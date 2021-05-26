Запуск приёмника:
```
gcc -o r reciever.c && ./r
```

Отправка сигнала: 
```
gcc -o e emitter.c && ./e <PID> <sig>
```
* PID - ID процесса приёмника
* SIGNAL - SIGUSR1 или SIGUSR2
