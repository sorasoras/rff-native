#include "tc_rt.h"

u32 fn_80069260(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800c35b0u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = (u32)param_1 + ((u32)param_3 * 0x1a0u);
        r3 = rd32(r4 + 0x5bcu);
        if (((((0u - r3) | r3) >> 0x1fu) & 1u) != 0u) {
            a.r[0] = r4 + 0x54cu;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r4 + 0x54cu) + 0x18u), &a);
        }
        r3 = (u32)param_1 + ((u32)param_3 * 0x1a0u) + 0x54cu;
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804890c8u;
        a.r[4] = param_4;
        a.r[5] = param_5;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
        wr32((u32)param_1 + 0xa08u, 0x21u);
        r4 = (((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
        wr32((u32)param_1 + 0xa0cu, 0x21u);
        wr32((u32)param_1 + 0xa10u, 0x21u);
        wr32((u32)param_1 + 0xa14u, 0u);
        wr16(r4 + 0xfeu, (u16)param_2);
        wr8(r4 + 0x101u, (u8)param_4);
        wr8(r4 + 0x100u, (u8)param_5);
        wr16(0x817fdfd8u, (u16)param_2);
        wr8(0x817fdfdau, (u8)param_5);
        wr8(0x817fdfdbu, (u8)param_4);
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x8008178cu, &a);
        r0 = 0u;
        if (param_2 >= 630 && param_2 <= 634) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r4 = (u32)rd8((((u32)param_2 - 0x1f8u) * 0x14u) - 0x7fb6082fu);
            if ((s32)rd32(0x80499178u) > (s32)r4) {
                wr32(0x80499178u, r4);
            }
        }
        r3 = 1u;
    }
    return r3;
}
