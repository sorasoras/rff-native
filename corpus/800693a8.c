#include "tc_rt.h"

u32 fn_800693a8(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_3 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800c35b0u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    r4 = (u32)param_1 + ((u32)param_2 * 0x1a0u);
    r0 = (u32)rd8(r4 + 0x5c4u);
    r5 = (u32)rd8(r4 + 0x5c5u);
    r4 = rd32(r4 + 0x5c0u);
    wr16(0x817fdfe8u, (u16)r4);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r0);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x800817c0u, &a);
    wr32((u32)param_1 + 0xa08u, 0x21u);
    wr32((u32)param_1 + 0xa0cu, 0x21u);
    wr32((u32)param_1 + 0xa10u, 0x21u);
    wr32((u32)param_1 + 0xa14u, 0u);
    r3 = (u32)param_1 + ((u32)param_2 * 0x1a0u) + 0x54cu;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0x21u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
    r4 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
    wr16(r4 + 0xfeu, 0x2e8u);
    r3 = 1u;
    wr8(r4 + 0x101u, 1u);
    wr8(r4 + 0x100u, 1u);
    return r3;
}
