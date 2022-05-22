#define MOTOR 11
void setup(){
    pinMode(MOTOR, OUTPUT);
}
void loop(){
    analogWrite(MOTOR, 95);
}