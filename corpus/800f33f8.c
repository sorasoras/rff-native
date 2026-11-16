#include "tc_rt.h"

void fn_800f33f8(f64 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = param_3;
    a.r[0] = rd32((u32)param_2 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    if (rd32(r3 + 4u) <= param_3) {
        r29 = 0u;
    }
    r3 = rd32(r3);
    r3 = (u32)rd8(r3 + (r29 * 0x24u));
    c0eq = r29 == rd32((u32)param_2 + 0x100u);
    wr32((u32)param_2 + 0x138u, r3);
    if (!c0eq) {
        r4 = rd32((u32)param_2 + 0x20cu);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32((u32)param_2 + 0x20cu, 0xffffffffu);
        }
    }
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = r29;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x80064c6cu, &a);
    return;
}
