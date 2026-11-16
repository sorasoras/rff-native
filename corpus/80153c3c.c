#include "tc_rt.h"

u32 fn_80153c3c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x30u) != 0xffffffffu && rd32((u32)param_1 + 4u) != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80153c30u, &a);
        f1 = tc_lastf();
        r3 = (r3 << 2u) & 0xfffffffcu;
        r4 = 0x804bebd0u;
        r3 = rd32(r3 - 0x7fb41430u);
        if (r3 != rd32((u32)param_1 + 4u)) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = rd32((u32)param_1 + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x70u), &a);
    } else {
        r3 = 0u;
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
