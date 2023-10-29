#ifndef __HOLO_H__
#define __HOLO_H__

#include <VarSpeedServo.h>

class Holo
{
    public:
        Holo(int VerticalServo, int HorizonatlServo, int LightPin);
        void on();
        void off();

    protected:
        VarSpeedServo Servo_V;
        VarSpeedServo Servo_H;

        int VerticalServo   = 0;
        int HorizonatlServo = 0;
        int LightPin        = 0;
};
#endif