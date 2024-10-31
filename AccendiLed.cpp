#include "AccendiLed.h"
#include "arduino.h"


void AccendiLed::inizia() {
    // Codice di inizializzazione
}

void acc(int pin,int temp){
     
   digitalWrite(pin,HIGH);
   delay(temp);
   digitalWrite(pin,LOW);
   delay(temp);
   

};