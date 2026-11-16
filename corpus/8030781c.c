#include "tc_rt.h"

u32 fn_8030781c(u32 param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = param_5;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r8 = rd32(param_1 + 4u);
    c0eq = ((((0u - r8) | r8) >> 0x1fu) & 1u) == 0u;
    if (!c0eq) {
        if (c0eq) {
            r4 = 0u;
        } else {
            r4 = rd32(r8 + 0x18u);
        }
        r3 = rd32(param_1);
        r4 = r4 + ((((u32)param_4 * param_5) << 2u) & 0xfffffffcu);
        r4 = r4 + 8u;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = (u32)param_4;
        a.r[4] = param_5;
        a.r[5] = r8;
        a.r[7] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x44u), &a);
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = 0x817fdfc0u;
        a.r[2] = 0x20u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
        if (r3 == 0x20u) {
            r3 = 0u;
            r4 = 0u;
            if ((s32)param_5 <= 0) {
                r3 = 1u;
            } else {
                r0 = (param_5 >> 2u) & 0x3fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r5 = (u32)rd16(r3 - 0x7e802040u);
                        r3 = r3 + 4u;
                        wr16((u32)param_2 + r4, (u16)r5);
                        wr16((u32)param_3 + r4, rd16((((r4 + 1u) << 1u) & 0xfffffffeu) - 0x7e802040u));
                        r0 = r4 + 3u;
                        r4 = r4 + 2u;
                        r5 = (u32)rd16(r3 - 0x7e802040u);
                        r0 = (r0 << 1u) & 0xfffffffeu;
                        r3 = r3 + 4u;
                        wr16((u32)param_2 + r4, (u16)r5);
                        r0 = (u32)rd16(r0 - 0x7e802040u);
                        wr16((u32)param_3 + r4, (u16)r0);
                        r0 = r4 + 3u;
                        r4 = r4 + 2u;
                        r5 = (u32)rd16(r3 - 0x7e802040u);
                        r0 = (r0 << 1u) & 0xfffffffeu;
                        r3 = r3 + 4u;
                        wr16((u32)param_2 + r4, (u16)r5);
                        r0 = (u32)rd16(r0 - 0x7e802040u);
                        wr16((u32)param_3 + r4, (u16)r0);
                        r0 = r4 + 3u;
                        r4 = r4 + 2u;
                        r5 = (u32)rd16(r3 - 0x7e802040u);
                        r0 = (r0 << 1u) & 0xfffffffeu;
                        r3 = r3 + 4u;
                        wr16((u32)param_2 + r4, (u16)r5);
                        r0 = (u32)rd16(r0 - 0x7e802040u);
                        wr16((u32)param_3 + r4, (u16)r0);
                        r4 = r4 + 2u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r31 = param_5 & 3u;
                    if (r31 == 0u) {
                        r3 = 1u;
                        return r3;
                    }
                }
                ctr = r31;
                do {
                    r5 = (u32)rd16(r3 - 0x7e802040u);
                    r3 = r3 + 4u;
                    wr16((u32)param_2 + r4, (u16)r5);
                    wr16((u32)param_3 + r4, rd16((((r4 + 1u) << 1u) & 0xfffffffeu) - 0x7e802040u));
                    r4 = r4 + 2u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r3 = 1u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
