#ifndef LOAD_KERNEL_INTIAILIED_H;
#define LOAD_KERNEL_INITIALIED_H;

#include <windows.h>

void winver()
{
    WINCLASS wc;
    wc.forx32bit                      = LoadForx32BitSystem(nullptr, true, false);
};

// end
