#include "mbed.h"
#include "rtos.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
Thread thread2;

void led2_thread() {
    while (true) {
        led2 = !led2;
        Thread::wait(1000);
    }
}

void led3_thread(const void *wait_time_p) {
    int w_time = *(int*)wait_time_p;
    while (true) {
        led3 = !led3;
        Thread::wait(w_time);
    }
}
 
int main() {
    thread2.start(led2_thread);
    int time = 750;
    Thread thread3(led3_thread, &time);
    while (true) {
        led1 = !led1;
        Thread::wait(500);
    }
}
