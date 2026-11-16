#include "tc_rt.h"

void fn_802c5bd8(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = param_r4 * 0x18u;
    r29 = ((param_r4 << 4u) & 0xfffffff0u) - 0x7fc66780u;
    r28 = param_r3 + r6;
    r27 = 0u;
    do {
        if ((s32)r27 >= (s32)rd8(r28 + 0x1c0u)) {
            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(r29);
            a.r[2] = 1u;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
            f1 = tc_lastf();
            r6 = 0u;
            wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
        } else {
            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(r29);
            a.r[2] = 1u;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
            f1 = tc_lastf();
            r6 = 0u;
            wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
        }
        r27 = r27 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r27 < 4);
    if ((u32)rd8(r28 + 0x1c0u) >= 2u) {
        r5 = 0x803486e8u;
        r3 = param_r4 + 0x1fu;
        r4 = 0u;
        ctr = 0x25u;
        for (;;) {
            if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x11u) {
                fl_ = 3u;
                break;
            }
            r4 = r4 + 1u;
            if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x11u) {
                fl_ = 2u;
                break;
            }
            r5 = r5 + 0x10u;
            r4 = r4 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                r4 = 0xffffffffu;
                fl_ = 1u;
                break;
            }
        }
        if (fl_ == 3u) {
            fl_ = 0u;
        } else if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
        }
        r29 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
        a.r[0] = r29;
        (void)tc_call(0x802bed24u, &a);
        wr32(r29 + 0x14u, 1u);
    } else {
        r5 = 0x803486e8u;
        r3 = param_r4 + 0x1fu;
        r4 = 0u;
        ctr = 0x25u;
        while (r3 != rd32(r5) || rd32(r5 + 4u) != 0x15u) {
            r4 = r4 + 1u;
            if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x15u) break;
            r5 = r5 + 0x10u;
            r4 = r4 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                r4 = 0xffffffffu;
                break;
            }
        }
        r29 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
        a.r[0] = r29;
        (void)tc_call(0x802bed24u, &a);
        wr32(r29 + 0x14u, 1u);
    }
    if ((s32)rd32(param_r3 + 0x7cu) < 100) {
        wr32(param_r3 + 0x7cu, 0u);
    }
    a.r[0] = rd32(param_r3 + ((param_r4 << 2u) & 0xfffffffcu) + 0x2acu);
    (void)tc_call(0x802c10f8u, &a);
    return;
}
