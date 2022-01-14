#include "mbed.h"


Serial pc(USBTX, USBRX);
int main(void) {
    pc.printf("Hello World!");
}
