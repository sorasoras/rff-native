#include "tc_rt.h"

u32 fn_800371f4(u32 param_1)
{
    if (rd32(param_1 + 4u) != 0u) {
        return (rd32(rd32(param_1 + 0x30u) + 0x34u) + 0x1fu) & 0xffffffe0u;
    }
    return (rd32(rd32(rd32(0x803a3ea0u) + 4u) + ((rd32(param_1) << 4u) & 0xfffffff0u)) + 0x1fu) & 0xffffffe0u;
}
