#include "mbed.h"

Serial pc(USBTX, USBRX);
int main() {
    pc.printf("Hello World!\r\n");
}