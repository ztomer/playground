#include "timer.h"

void (*timer_callback)(void);


struct itimerval timervalue;
struct sigaction new_handler, old_handler;

void timer_sig_handler(int timeout);

int start_timer(int mSec, void (*callback_function)(void)){
  timer_callback = callback_function;

  timervalue.it_interval.tv_sec = mSec / 1000;
  timervalue.it_interval.tv_usec = (mSec % 1000) * 1000;
  timervalue.it_value.tv_sec = mSec / 1000;
  timervalue.it_value.tv_usec = (mSec % 1000)* 1000;

  if (setitimer(ITIMER_REAL, &timervalue, NULL)) {
    printf("settimer() ERROR\n");
    return 1;
  }
  new_handler.sa_handler = &timer_sig_handler;
  new_handler.sa_flags = SA_NOMASK;
  if (sigaction(SIGALRM, &new_handler, &old_handler)){
    printf("sigaction() error\n");
  }

  return 0;
}

void timer_sig_handler(int timeout){
  timer_callback();
}

void stop_timer(){
  timervalue.it_interval.tv_sec = 0;
  timervalue.it_interval.tv_usec = 0;
  timervalue.it_value.tv_sec = 0;
  timervalue.it_value.tv_usec = 0;

  setitimer(ITIMER_REAL, &timervalue, NULL);
  sigaction(SIGALRM, &old_handler, NULL);
}


/**************************************************************************/
/*** main ***/
void timer_handler(void);
int var = 0;



int main(void){
  if (start_timer(2000, &timer_handler)){
    printf(" timer error (1)\n");
    return 1;
  }

  printf("press ^c to quit\n");

  while(1){
    if (var > 5 ){
      break;
    }
  }

  stop_timer();
  return 0;
}

void timer_handler(void){
  printf("timer: var is %i\n", var++);
}
