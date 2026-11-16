#include "tc_rt.h"

void fn_8009b7ec(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        for (;;) {
            r3 = rd32((u32)param_1 + 0x4cu);
            if (r3 == 0u) break;
            wr32(r3 + 0x58u, 0u);
            a.r[0] = rd32((u32)param_1 + 0x4cu);
            f1 = tc_callf(0x8009bd68u, &a);
        }
        r29 = (u32)param_1;
        r28 = 0u;
        do {
            r3 = rd32(r29 + 0xc0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x8009f220u, &a);
                wr32(r29 + 0xc0u, 0u);
            }
            r28 = r28 + 1u;
            r29 = r29 + 4u;
        } while (r28 < 3u);
        if ((rd32((u32)param_1 + 0x50u) & 8u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xa8u);
            a.r[1] = rd32((u32)param_1 + 0x48u);
            a.f[0] = f1;
            f1 = tc_callf(rd32((u32)param_1 + 0x1cu), &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xfffffff7u);
        }
        if ((rd32((u32)param_1 + 0x50u) & 0x10u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xb4u);
            a.r[1] = rd32((u32)param_1 + 0x48u);
            a.f[0] = f1;
            f1 = tc_callf(rd32((u32)param_1 + 0x1cu), &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xffffffefu);
        }
        if ((rd32((u32)param_1 + 0x50u) & 0x80u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0xacu);
            f1 = tc_callf(0x8009c068u, &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xffffff7fu);
        }
        if ((rd32((u32)param_1 + 0x50u) & 0x100u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0xb8u);
            f1 = tc_callf(0x8009c068u, &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xfffffeffu);
        }
        if ((rd32((u32)param_1 + 0x50u) & 1u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x54u);
            a.r[1] = rd32((u32)param_1 + 0x48u);
            a.f[0] = f1;
            (void)tc_call(rd32((u32)param_1 + 0x1cu), &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xfffffffeu);
        }
        if ((rd32((u32)param_1 + 0x50u) & 4u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x58u);
            (void)tc_call(0x8009c068u, &a);
            wr32((u32)param_1 + 0x50u, rd32((u32)param_1 + 0x50u) & 0xfffffffbu);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8009c068u, &a);
    }
    return;
}
