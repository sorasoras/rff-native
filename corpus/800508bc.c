#include "tc_rt.h"

void fn_800508bc(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32(0x805710a8u) + 0x3cu);
    (void)tc_call(0x80037834u, &a);
    wr32(rd32(0x805710a8u) + 0x58u, 0u);
    r4 = rd32(0x805710a8u);
    r29 = rd32(r4 + 0x40u);
    r28 = rd32(r4 + 0x44u);
    if (rd32(0x803c8664u) == 0u) {
        wr32(0x805710a4u, 0u);
        wr32(0x805710a8u, 0u);
        a.r[0] = 0x803c865cu;
        f1 = tc_callf(0x8007ae84u, &a);
        r4 = tc_lastr4();
    } else {
        a.r[0] = 0x803c865cu;
        r3 = tc_call(0x8007b09cu, &a);
        r5 = rd32(r3 + 0x38u);
        r31 = r3;
        r3 = r3 + 4u;
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = r5;
        r3 = tc_call(0x80037648u, &a);
        wr32(r31 + 0x3cu, r3);
        wr32(0x805710a8u, r31);
        wr32(r31, 0u);
        wr32(0x805710a4u, 0u);
        a.r[0] = rd32(r31 + 0x3cu);
        f1 = tc_callf(0x80037804u, &a);
        r4 = tc_lastr4();
    }
    if (r29 != 0u) {
        a.r[0] = r28;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r29, &a);
    }
    if (rd32(0x805710a4u) == 0u) {
        r30 = rd32(0x80571124u);
        r3 = tc_call(0x8003c20cu, &a);
        r3 = r30 & (u32)((s32)((0u - r3) | r3) >> 31);
        wr32(0x80571124u, r3);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        a.r[0] = r3;
        (void)tc_call(0x80035b6cu, &a);
    }
    return;
}
