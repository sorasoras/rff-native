#include "tc_rt.h"

u32 fn_802151d0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_2 >= 0 && param_2 < (s32)rd32((u32)param_1 + 0xe4u)) {
        a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u);
        r3 = tc_call(0x80219680u, &a);
        return r3;
    }
    return 0xffffffffu;
}
