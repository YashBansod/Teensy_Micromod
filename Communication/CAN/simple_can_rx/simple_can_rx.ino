#include <FlexCAN_T4.h>

FlexCAN_T4<CAN3, RX_SIZE_256, TX_SIZE_16> can_node_2;
CAN_message_t msg;

void setup(void) {
  Serial.begin(9600);
  can_node_2.begin();
  can_node_2.setBaudRate(5e5);
}

void loop() {
  if ( can_node_2.read(msg) ) {
    for(int i = 0; i < msg.len; ++i)
      Serial.print((char)msg.buf[i]);
  }
  delay(100);
}
