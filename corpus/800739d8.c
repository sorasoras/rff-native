#include "tc_rt.h"

void fn_800739d8(void)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = rd32(0x8046ad74u);
    while (r29 != 0u) {
        r3 = r29;
        r29 = rd32(r29);
        r28 = rd32(r3 + 8u);
        a.r[0] = r28;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r28) + 0x140u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((r3 == 0u && (u32)((s32)rd32(r28 + 0x148u) >> 31) == 0u) && rd32(r28 + 0xed0u) != 0xbu) {
            wr8(r28 + 0x162cu, 0u);
            a.r[0] = r28;
            f1 = tc_callf(0x80074de4u, &a);
            r4 = tc_lastr4();
            r30 = rd32(r28 + 0x158u);
            if (r30 != 0u) {
                a.r[0] = r30;
                (void)tc_call(0x80095f78u, &a);
                a.r[0] = r30;
                f1 = tc_callf(0x8009608cu, &a);
                r4 = tc_lastr4();
            }
        }
    }
    (void)tc_call(0x80074c4cu, &a);
    return;
}
