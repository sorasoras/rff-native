#include "tc_rt.h"

void fn_802d1674(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = param_2;
    r3 = tc_call(0x802cb1d8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        wr8(r3 + 0xeu, (u8)((ppc_cntlzw(param_3) >> 5u) & 0x7ffffffu));
    }
    r3 = rd32(param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
    }
    if ((u32)param_4 != 0u) {
        r30 = param_1 + 0x14u;
        r31 = rd32(r30);
        while (r31 != r30) {
            a.r[0] = r31 - 4u;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31 - 4u) + 0x58u), &a);
            r31 = rd32(r31);
        }
    }
    return;
}
