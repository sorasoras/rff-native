#include "tc_rt.h"

s32 fn_80303ee8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32((u32)param_1 + 0x18u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 8u), &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            return (s32)r3;
        }
    }
    r3 = rd32((u32)param_1 + 0x10u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    if (r3 != 0u) {
        return (s32)r3;
    }
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc0u;
    r3 = tc_call(0x80301534u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r30 = 0u;
        while (r30 < rd32(0x817fdfccu)) {
            a.r[0] = rd32((u32)param_1 + 0x10u);
            a.r[1] = param_2;
            a.r[2] = r30;
            a.r[3] = 0x817fdfb8u;
            r3 = tc_call(0x8030153cu, &a);
            if (r3 != 0u) {
                r3 = rd32((u32)param_1 + 0x14u);
                r4 = rd32(0x817fdfb8u);
                if (r3 == 0u) {
                    r31 = 0u;
                } else {
                    if (r4 >= rd32(r3)) {
                        r31 = 0u;
                    } else {
                        r3 = r3 + ((r4 << 3u) & 0xfffffff8u);
                        r31 = rd32(r3 + 4u);
                    }
                }
                if (r31 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x10u);
                    a.r[1] = r4;
                    a.r[2] = rd32(0x817fdfbcu);
                    a.r[3] = 0x817fdfd0u;
                    r3 = tc_call(0x8030152cu, &a);
                    if (r3 != 0u) {
                        r3 = r31 + rd32(0x817fdfd4u);
                        return (s32)r3;
                    }
                }
            }
            r30 = r30 + 1u;
        }
        r3 = 0u;
    }
    return (s32)r3;
}
