#include <SoftwareSerial.h>
const int PIN_RED   = 2;
const int PIN_GREEN = 3;
const int PIN_BLUE  = 4;

SoftwareSerial BTserial(10, 11);
String command = "";

int red;
int green;
int blue;

void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}

void setup() {
  //set all three pins to output mode
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  Serial.begin(115200);
  Serial.println("Type AT commands!");
  BTserial.begin(9600);

}

void loop() {
  if (BTserial.available()) {
    char data = BTserial.read();
    Serial.print("Dados recebidos do Bluetooth: ");
    Serial.println(data);

    if (data == 'a') {
      setColor(214, 6, 6);
    }
    else if (data == 'b') {
      setColor(6, 74, 13);
    }
    else if (data == 'c') {
      setColor(1, 102, 255);
    }
    else if (data == 'd') {
      setColor(202, 48, 2);
    }
    else if (data == 'e') {
      setColor(17, 106, 26);
    }
    else if (data == 'f') {
      setColor(18, 25, 201);
    }
    else if (data == 'g') {
      setColor(218, 95, 27);
    }
    else if (data == 'h') {
      setColor(70, 214, 161);
    }
    else if (data == 'i') {
      setColor(58, 6, 168);
    }
    else if (data == 'j') {
      setColor(219, 128, 63);
    }
    else if (data == 'k') {
      setColor(61, 142, 136);
    }
    else if (data == 'l') {
      setColor(103, 3, 163);
    }
    else if (data == 'm') {
      setColor(254, 215, 75);
    }
    else if (data == 'n') {
      setColor(4, 68, 95);
    }
    else if (data == 'o') {
      setColor(167, 47, 240);
    }
  }
}
