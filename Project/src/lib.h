#include <Arduino.h>
#define watermotor 26
#define motor1 32
#define motor2 35
#define fan 33
#define fan_bobin 34


int motor1_state = 0;
int motor2_state = 0;

int watermotor_state = 0;

void yikama(int speed, int again){
    if (again == 0){
        Serial.println("Gecerli bi sayi yaz.");
    }
    else{
        for(int i = 0; i <= again; i++){
        watermotor_state = 1;
        analogWrite(watermotor, speed);
            int iny = 0;
        iny++;
        Serial.println(String(iny) + "kez yikandi.");
        delay(5000);
        }
    }   
}
void kurutma(int fansped, int again, int motor1_spedde, int motor2_speed,int fan_sicaklik){
    if (again == 0){
        Serial.println("Gecerli bi sayi yaz.");
    }
    else{
        for(int i = 0; i <= again; i++){
        motor1_state = 1;
        motor2_state = 1;
        analogWrite(fan,fansped);
        analogWrite(fan_bobin,fan_sicaklik);
        analogWrite(motor1,motor1_spedde);
        analogWrite(motor2,motor2_speed);
        int in = 0;
        in++;
        Serial.println(String(in) + " kez kurutuldu.");
        delay(5000);
        }
    }
}