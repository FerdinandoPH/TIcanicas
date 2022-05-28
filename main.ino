#define MOTOR 11
int vel=95;

void setup(){
    pinMode(MOTOR, OUTPUT);
    Serial.begin(9600);
    Serial.println("HOLA");
}
void loop(){
    if (Serial.available()>0){
        vel=Serial.readString().toInt();
        if (vel>255){
            vel=255;
        }
        else if (vel <-255){
            vel=-255;
        }
        
    }
    analogWrite(MOTOR, vel);
}