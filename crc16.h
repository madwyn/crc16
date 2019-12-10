#ifndef CRC16_H_INCLUDED
#define CRC16_H_INCLUDED

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \brief http://www.lammertbies.nl/comm/info/crc-calculation.html
 *  "123456789"
 *  CRC-CCITT (0xFFFF)	0x29B1
 * \param data_p const unsignedchar*
 * \param length unsigned int
 * \return uint16_t
 *
 */
uint16_t crc16(const unsigned char* data_p, unsigned int length);

#ifdef __cplusplus
}
#endif

#endif // CRC16_H_INCLUDED
