#include "tc_rt.h"

void fn_80272510(u32 param_r3, u32 param_r4)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_r3 == 0u) {
        if (param_r4 == 2u) {
            wr32(0x817fdfd8u, 0u);
            r3 = tc_call(0x8023029cu, &a);
            r27 = tc_lastr4();
            r28 = r3;
            a.r[0] = 0x802725dcu;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x8026ebecu, &a);
            do {
                r3 = tc_call(0x8023029cu, &a);
                r4 = tc_lastr4();
                ca = r27 <= r4;
                r4 = r4 - r27;
                a.r[0] = (u32)((u64)~r28 + (u64)r3 + (u64)ca);
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
                r3 = tc_call(0x80255b5cu, &a);
                r0 = r3 ^ 0x80000000u;
            } while ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)r0 + 0x7fffffffull + (u64)(tc_lastr4() >= 0x1f4u)) >> 0x20ull))) != 0u && rd32(0x817fdfd8u) == 0u);
        }
    }
    return;
}
