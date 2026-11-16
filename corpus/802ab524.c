#include "tc_rt.h"

u32 fn_802ab524(s32 param_1)
{
    if ((u32)rd8(0x80540a28u) != 0u && rd32(0x80540a2cu) == (u32)param_1) {
        return 0x80540a28u;
    }
    if ((u32)rd8(0x80540a84u) != 0u && rd32(0x80540a88u) == (u32)param_1) {
        return 0x80540a84u;
    }
    if ((u32)rd8(0x80540ae0u) != 0u && rd32(0x80540ae4u) == (u32)param_1) {
        return 0x80540ae0u;
    }
    if ((u32)rd8(0x80540b3cu) != 0u && rd32(0x80540b40u) == (u32)param_1) {
        return 0x80540b3cu;
    }
    return 0u;
}
