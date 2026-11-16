#include "tc_rt.h"

void fn_80096620(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xd4u, (rd32((u32)param_1 + 0xd4u) & 0xdfffffffu) | ((param_2 << 0x1du) & 0x20000000u));
    if (param_2 != 0u) {
        wrf32d((u32)param_1 + 0x104u, (f64)rdf32(0x80572a78u));
        return;
    }
    return;
}
