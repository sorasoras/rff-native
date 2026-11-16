#include "tc_rt.h"

void fn_802a80d0(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r26 = 0u;
    r4 = (u32)rd16(0x805411d8u);
    if (r4 != 0u) {
        if ((u32)rd8(0x80540a28u) != 0u && (u32)rd8(0x80540a82u) == 1u) {
            r26 = 1u;
        }
        if ((u32)rd8(0x80540a84u) != 0u && (u32)rd8(0x80540adeu) == 1u) {
            r26 = r26 + 1u;
        }
        if ((u32)rd8(0x80540ae0u) != 0u && (u32)rd8(0x80540b3au) == 1u) {
            r26 = r26 + 1u;
        }
        if ((u32)rd8(0x80540b3cu) != 0u && (u32)rd8(0x80540b96u) == 1u) {
            r26 = r26 + 1u;
        }
        r29 = 0u;
        r28 = 0x80540a28u;
        r27 = ((u32)ppc_divw((s32)rd16(0x80540a22u), (s32)r4) + 1u) & 0xffffu;
        do {
            if ((u32)rd8(r28) != 0u) {
                if (r26 == 0u || (u32)rd8(r28 + 0x5au) == 1u) {
                    wr16(r28 + 0x34u, (u16)r27);
                    wr16(r28 + 0x36u, (u16)r27);
                } else {
                    wr16(r28 + 0x34u, 3u);
                    wr16(r28 + 0x36u, 3u);
                }
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)((u32)rd16(r28 + 0x34u) * 0x78u)) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r4 = r0 & 0xffffu;
                wr16(r28 + 0x3au, (u16)r0);
                r0 = 3u - r4;
                wr16(r28 + 0x3cu, (u16)((r4 - 3u) & (u32)((u64)~r0 + (u64)r0 + (u64)(r4 <= 3u))));
                wr16(r28 + 0x3eu, (u16)(r4 + 2u));
                if ((u32)rd8(0x80540a20u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80004u;
                    a.r[1] = 0x80396728u;
                    a.r[2] = r29 & 0xffffu;
                    a.r[3] = (u32)rd8(r28 + 0x5au);
                    a.r[4] = (u32)rd16(r28 + 0x36u);
                    a.r[5] = (u32)rd16(r28 + 0x3au);
                    a.r[6] = (u32)rd16(r28 + 0x3cu);
                    a.r[7] = (u32)rd16(r28 + 0x3eu);
                    f1 = tc_callf(0x8028cce4u, &a);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
            }
            r29 = r29 + 1u;
            r28 = r28 + 0x5cu;
        } while (r29 < 4u);
    }
    return;
}
