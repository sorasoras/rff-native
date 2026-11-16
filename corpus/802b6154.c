#include "tc_rt.h"

u32 fn_802b6154(u32 param_1)
{
    if ((u32)rd8(0x8054165cu) != 0u && (u32)rd16(0x8054167eu) == param_1) {
        return 0x8054165cu;
    }
    if ((u32)rd8(0x80541ad4u) != 0u && (u32)rd16(0x80541af6u) == param_1) {
        return 0x80541ad4u;
    }
    if ((u32)rd8(0x80541f4cu) != 0u && (u32)rd16(0x80541f6eu) == param_1) {
        return 0x80541f4cu;
    }
    if ((u32)rd8(0x805423c4u) != 0u && (u32)rd16(0x805423e6u) == param_1) {
        return 0x805423c4u;
    }
    return 0u;
}
