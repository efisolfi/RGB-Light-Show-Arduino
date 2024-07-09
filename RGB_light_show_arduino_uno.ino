//  credits thanks to tinkercad an online platform for testing out electrical circuits   https://www.tinkercad.com/
//  thanks to codekit  https://edukits.co/code/  an online platform for dragging and dropping code for arduino programming
//  Ernesto Razo Hernandez
//   This code is licensed as public domain, in other words you can do whatever you want with it


void setup() {
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  //purple
  analogWrite(5, 153);
  analogWrite(9, 51);
  analogWrite(11, 153);
  delay(1000);
  //blue
  analogWrite(5, 51);
  analogWrite(9, 51);
  analogWrite(11, 255);
  delay(1000);
  //green
  analogWrite(5, 0);
  analogWrite(9, 153);
  analogWrite(11, 0);
  delay(1000);
  //orange
  analogWrite(5, 204);
  analogWrite(9, 102);
  analogWrite(11, 0);
  delay(1000);
  //red
  analogWrite(5, 255);
  analogWrite(9, 0);
  analogWrite(11, 0);
  delay(1000);


}
