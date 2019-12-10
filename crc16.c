#include "crc16.h"

uint16_t crc16(const unsigned char* data_p, unsigned int length) {
    uint16_t x;
    uint16_t crc = 0xFFFF;

    while (length--) {
        x = crc >> 8 ^ *(data_p++);
        x ^= x>>4;
        crc = (crc << 8) ^ (x << 12) ^ (x << 5) ^ x;
    }

    return crc;
}

