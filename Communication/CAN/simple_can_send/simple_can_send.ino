#include <FlexCAN_T4.h>

FlexCAN_T4<CAN3, RX_SIZE_256, TX_SIZE_16> can_node_1;
CAN_message_t msg;
const char message_1[8] = "Hello!!\n";
const char message_2[8] = "Yello!!\n";

void setup(void) {
  can_node_1.begin();
  can_node_1.setBaudRate(5e5);
}

void loop() {
  memcpy(msg.buf, message_1, 8);
  can_node_1.write(msg);
  delay(3e3);
  memcpy(msg.buf, message_1, 8);
  can_node_1.write(msg);
  delay(3e3);
}
