#include "tc_rt.h"

u32 fn_8003c568(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(0x803be2b0u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r0 < 0) {
            r3 = 1u;
            return r3;
        }
        a.r[0] = 0x8034f690u;
        a.r[1] = 5u;
        a.r[2] = 0x4e4f5320u;
        r3 = tc_call(0x80037648u, &a);
        wr32(0x803be220u, r3);
        a.r[0] = r3;
        (void)tc_call(0x80037804u, &a);
        wr32(0x803be2b0u, 1u);
    } else {
        a.r[0] = rd32(0x803be220u);
        r3 = tc_call(0x80037810u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32(0x803be220u);
            (void)tc_call(0x80037834u, &a);
            a.r[0] = 0u;
            a.r[1] = 0x80000u;
            a.r[2] = 0x4e4f5320u;
            a.r[3] = 0x8034f658u;
            r3 = tc_call(0x80040cd8u, &a);
            wr32(0x803be234u, r3);
            wr32(0x803be250u, 0x80000u);
            wr32(0x803be260u, 0u);
            a.r[0] = 0x803be224u;
            (void)tc_call(0x802c2530u, &a);
            wr32(0x803be2acu, rd32(0x803be2acu) | 1u);
            a.r[0] = 1u;
            (void)tc_call(0x80035b6cu, &a);
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
