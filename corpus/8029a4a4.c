#include "tc_rt.h"

u32 fn_8029a4a4(u32 param_1)
{
    if (param_1 == (u32)rd16(0x8053f1b6u) && (u32)rd16(0x8053f1b4u) == 4u) {
        return 1u;
    }
    if (param_1 == (u32)rd16(0x8053f1eau) && (u32)rd16(0x8053f1e8u) == 4u) {
        return 1u;
    }
    if (param_1 == (u32)rd16(0x8053f21eu) && (u32)rd16(0x8053f21cu) == 4u) {
        return 1u;
    }
    return 0u;
}
