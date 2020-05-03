int pin=8;
int green=9;
int red=10;
int vall;

void setup() {
 pinMode (pin,INPUT);
 pinMode (red,OUTPUT);
 pinMode (green,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  digitalWrite(pin,HIGH);
  vall=digitalRead(pin);
  Serial.println(vall);
  

}
