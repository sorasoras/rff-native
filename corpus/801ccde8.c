#include "tc_rt.h"

u32 fn_801ccde8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0x148u);
        if ((u32)((s32)((r3 << 5u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 6u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 7u) & 0xc0000000u) >> 31) == 0u) {
            r3 = 2u;
            if (rd32(param_1 + 0x2a0u) == 0xffffffffu) {
                r7 = 0u;
                r5 = 0u;
                ctr = 0xau;
                for (;;) {
                    if (r7 > 1u) {
                        r6 = rd32(param_1 + 0x324u);
                        if (rd32(rd32(r6 + r5) + 0x2a0u) != 0xffffffffu) break;
                    } else {
                        r6 = rd32(param_1 + 0x324u);
                        if (rd32(rd32(r6 + r5) + 0x2a0u) != 0xffffffffu) {
                            r3 = rd32(r6 + ((r7 << 2u) & 0xfffffffcu));
                            a.r[0] = r3;
                            a.r[1] = param_2;
                            a.r[2] = param_3;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r3) + 0x74u), &a);
                            return r3;
                        }
                    }
                    r5 = r5 + 4u;
                    r7 = r7 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        return r3;
                    }
                }
                r3 = rd32(r6 + ((r7 << 2u) & 0xfffffffcu));
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x74u), &a);
                return r3;
            }
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            r3 = tc_call(0x8007f238u, &a);
            return r3;
        }
    }
    r3 = 2u;
    return r3;
}
