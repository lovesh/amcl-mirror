#include "arch.h"
#include "ecp_SECP256K1.h"

namespace SECP256K1 {

/* Curve SECP256K1 */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

using namespace B256_28;

const int CURVE_Cof_I=1;
const BIG CURVE_Cof= {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_A= 0;
const int CURVE_B_I= 7;
const BIG CURVE_B= {0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG CURVE_Order= {0x364141,0xD25E8CD,0x8A03BBF,0xDCE6AF4,0xFFEBAAE,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xF};
const BIG CURVE_Gx= {0x6F81798,0xF2815B1,0xE28D959,0xFCDB2DC,0xB07029B,0x95CE870,0xC55A062,0xF9DCBBA,0x9BE667E,0x7};
const BIG CURVE_Gy= {0xB10D4B8,0x47D08FF,0x554199C,0xB448A68,0x8A8FD17,0xFC0E110,0x55DA4FB,0x26A3C46,0x83ADA77,0x4};

#endif

#if CHUNK==64

using namespace B256_56;

// Base Bits= 56
const int CURVE_Cof_I=1;
const BIG CURVE_Cof= {0x1L,0x0L,0x0L,0x0L,0x0L};
const int CURVE_A= 0;
const int CURVE_B_I= 7;
const BIG CURVE_B= {0x7L,0x0L,0x0L,0x0L,0x0L};
const BIG CURVE_Order= {0xD25E8CD0364141L,0xDCE6AF48A03BBFL,0xFFFFFFFFFEBAAEL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFL};
const BIG CURVE_Gx= {0xF2815B16F81798L,0xFCDB2DCE28D959L,0x95CE870B07029BL,0xF9DCBBAC55A062L,0x79BE667EL};
const BIG CURVE_Gy= {0x47D08FFB10D4B8L,0xB448A68554199CL,0xFC0E1108A8FD17L,0x26A3C4655DA4FBL,0x483ADA77L};

#endif

}
