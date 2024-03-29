#ifndef IR_REMOTE_H
#define IR_REMOTE_H

#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRsend.h>
class IRremote: public IRrecv, public IRsend{
public:
    IRremote(uint8_t INPUT_PIN,uint8_t OUTPUT_PIN);
    decode_results getCode();
    void sendCode(uint64_t code);
};

#endif 