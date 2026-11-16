#include "tc_rt.h"

void fn_800841d4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = ((u32)param_2 << 2u) & 0xfffffffcu;
    if (rd32(rd32(param_1 + 0x78u) + r6 + 0x20u) != 0u) {
        r4 = rd32(param_1 + 0x80u) | 0x20000000u;
        wr32(param_1 + 0x80u, r4);
        if ((u32)((s32)((r4 << 2u) & 0xc0000000u) >> 31) != 0u) {
            wr32(param_1 + 0x80u, r4 | 0x8000000u);
        }
        r4 = rd32(param_1 + 0x80u);
        if ((u32)((s32)((r4 << 2u) & 0xc0000000u) >> 31) != 0u) {
            wr32(param_1 + 0x80u, r4 | 0x8000000u);
        }
        a.f[0] = (f64)rdf32(0x805728f4u);
        a.r[0] = rd32(param_1 + 0x70u);
        a.r[1] = rd32(rd32(param_1 + 0x78u) + r6 + 0x20u);
        a.r[2] = (((0u - param_3) | param_3) >> 0x1fu) & 1u;
        f1 = tc_callf(0x80035740u, &a);
        r4 = tc_lastr4();
        r0 = rd32(param_1 + 0x90u);
        c0lt = (s32)r0 < 256;
        if (r0 != 0x100u) {
            if (!c0lt) {
                return;
            }
            if (r0 != 0x80u) {
                return;
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2721u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2724u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        }
    }
    return;
}
