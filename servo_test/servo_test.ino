# include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;

void setup() {
  //Serial.begin(9600);
  servo_1.attach(2);
  servo_2.attach(3);
  servo_3.attach(4);
  servo_4.attach(5);
  servo_5.attach(6);
  servo_6.attach(7);
}

void calibratio(){
  
}


void loop() {
  /*
    if(Serial.available() > 0){ 
      String serial;
      serial = Serial.read();
      Serial.println(serial);
   } */

}
