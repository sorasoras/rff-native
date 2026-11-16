#include "tc_rt.h"

void fn_8020af88(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 == 0u || r0 == 1u) {
        r5 = rd32(param_1 + 0xcu);
        if (r5 != 0u && (u32)((s32)rd32(r5 + 0x9cu) >> 31) != 0u) {
            r4 = rd32(r5 + 0xb8u);
            if (((ppc_cntlzw(r4) >> 5u) & 0x7ffffffu) == 0u) {
                if (((ppc_cntlzw(r4 - 2u) >> 5u) & 0x7ffffffu) != 0u) {
                    a.r[0] = r5;
                    a.r[1] = rd32(param_1 + 4u);
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = 0.0;
                    f1 = tc_callf(rd32(rd32(r5) + 0xdcu), &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                }
            } else {
                r7 = (u32)rd16(0x80499088u);
                r6 = rd32(param_1 + 4u) & 0xffffu;
                r4 = (u32)rd16(0x8049908au);
                r5 = r7 + rd32(0x8049e14cu);
                if ((s32)r5 <= 0) {
                    r5 = 0u;
                }
                if ((s32)r5 >= 65535) {
                    r5 = 0xffffu;
                }
                if ((s32)r5 <= 0) {
                    r5 = 0x64u;
                }
                if ((s32)(r6 + r4) >= (s32)(r5 & 0xffffu)) {
                    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r4 <= 0) {
                        r4 = 0u;
                    }
                    if ((s32)r4 >= 65535) {
                        r4 = 0xffffu;
                    }
                    if ((s32)r4 <= 0) {
                        r4 = 0x64u;
                    }
                    r0 = r4 & 0xffffu;
                } else {
                    r0 = r6 + (u32)rd16(0x8049908au);
                }
                r0 = r0 & 0xffffu;
                if (r0 >= 0xffffu) {
                    r0 = 0xffffu;
                }
                wr16(0x8049908au, (u16)r0);
            }
        }
        r3 = rd32(param_1 + 0xcu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80576774u);
        a.r[0] = 0x69u;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d783cu, &a);
        wr32(param_1 + 0x14u, r3);
    }
    return;
}
