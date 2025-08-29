#include<VirtualWire.h>
int a, b, c;
char *data;
void setup()
{
  vw_set_tx_pin(8);
  vw_setup(2000);
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
  Serial.println("Accelerometer");
  a = analogRead(A5);
  b = analogRead(A4);
  c = analogRead(A3);
}
int x, y, z, x1, y1, z1;
void loop()
{
  x = analogRead(A5);
  y = analogRead(A4);
  z = analogRead(A3);
  x1 = x - a;
  y1 = y - b;
  z1 = z - c;
  if (y1 >= 30)
  {
    data = "f";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    Serial.println("Forward");
  }
  else if (y1 <= -30)
  {
    data="b";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    Serial.println("Backward");
  }
  else if (x1 >= 30)
  {
    data="r";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    Serial.println("Right");
  }
  else if (x1 <= -30)
  {
    data="l";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    Serial.println("Left");
  }
  else
  {
    data="s";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    Serial.println("Stop");
  }
}