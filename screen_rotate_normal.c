#include<stdio.h>

void main(void)
{
    system("xrandr -o normal");
    system("xinput map-to-output 13 eDP-1");
    system(" xinput map-to-output 10 eDP-1");
}