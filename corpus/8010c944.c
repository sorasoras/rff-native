#include "tc_rt.h"

s32 fn_8010c944(s32 param_1)
{
    u32 r5 = 0;
    r5 = 0u;
    if ((rd32((u32)param_1 + 0x8cu) + 0x10000u) != 0xffffu) {
        r5 = 1u;
    }
    if ((rd32((u32)param_1 + 0x11cu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x1acu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x23cu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x2ccu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x35cu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x3ecu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    if ((rd32((u32)param_1 + 0x47cu) + 0x10000u) != 0xffffu) {
        r5 = r5 + 1u;
    }
    return (s32)r5;
}
