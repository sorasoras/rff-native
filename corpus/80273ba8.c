#include "tc_rt.h"

void fn_80273ba8(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    for (;;) {
        r3 = (u32)rd8(0x805038dau) + 1u;
        wr8(0x805038dau, (u8)r3);
        if ((r3 & 0xffu) >= 2u) break;
        wr8(0x805038d9u, 0u);
        r3 = ((r3 << 2u) & 0x3fcu) - 0x7fafc880u;
        r3 = rd32(r3 + 0x164u);
        a.r[0] = r3;
        a.r[1] = 0x80503788u;
        a.r[2] = 1u;
        a.r[3] = 0x80273964u;
        a.r[4] = 0x80503814u;
        r3 = tc_call(0x80271bf4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            return;
        }
    }
    r0 = rd32(0x805038e0u);
    c0lt = (s32)r0 < 0;
    if (r0 != 0u) {
        r29 = rd32(0x805038ecu);
        a.r[0] = r29;
        a.r[1] = 0u;
        a.r[2] = 0x4000u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = r29;
        a.r[1] = 0x80570d78u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r29 + 0x3ffcu;
        a.r[1] = 0x80570d80u;
        a.r[2] = 4u;
        f1 = tc_callf(0x80004338u, &a);
        r4 = tc_lastr4();
        wr16(r29 + 6u, 8u);
        wr32(0x805038fcu, rd32(0x805038f4u));
    }
    wr8(0x800038ffu, 0u);
    r12 = rd32(0x805038dcu);
    if (r12 != 0u) {
        a.r[0] = rd32(0x805038e0u);
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
        wr32(0x805038dcu, 0u);
    }
    wr8(0x80571ab0u, 3u);
    return;
}
