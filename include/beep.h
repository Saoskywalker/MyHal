#ifndef _BEEP_H
#define _BEEP_H

typedef struct
{
    unsigned char Mod;
    unsigned char Time;
    unsigned char Vol;
} beep_dev;

extern beep_dev beep;

void BeeFunction(void);
void beep_init(void);

#endif
