#include <stdio.h>

#include <sys/time.h>
#include <signal.h>

int start_timer(int mSec, void(*callback_function)(void));
void stop_timer(void);
