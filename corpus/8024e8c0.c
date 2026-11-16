#include "tc_rt.h"

void fn_8024e8c0(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(0x80576c88u);
    wr32(0x817fdff8u, 0u);
    wr32(r31 + 0xcu, (u32)rd16(rd32(0x80571954u)));
    if (((rd32(r31 + 8u) >> 3u) & 1u) != 0u && ((rd32(r31 + 0xcu) >> 1u) & 1u) != 0u) {
        a.r[0] = rd32(0x8057198cu);
        (void)tc_call(0x8022fbb8u, &a);
        r3 = rd32(0x80576c88u);
        wr32(0x80571988u, 0u);
        r0 = rd32(r3 + 0x10u) | 3u;
        wr32(r3 + 0x10u, r0);
        wr16(rd32(0x80571954u) + 4u, (u16)r0);
        r0 = (rd32(r31 + 8u) | 4u) & 0xfffffff7u;
        wr32(r31 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
    }
    if (((rd32(r31 + 8u) >> 2u) & 1u) != 0u && (rd32(r31 + 0xcu) & 1u) != 0u) {
        r5 = rd32(0x80576c88u);
        wr32(0x8057197cu, rd32(0x8057197cu) + 1u);
        r4 = (rd32(r31 + 8u) & 0xfffffffbu) | 8u;
        wr32(r31 + 8u, r4);
        wr16(rd32(0x80571954u) + 2u, (u16)r4);
        r4 = (rd32(r5 + 0x10u) | 1u) & 0xfffffffdu;
        wr32(r5 + 0x10u, r4);
        wr16(rd32(0x80571954u) + 4u, (u16)r4);
        wr32(0x80571988u, 1u);
        a.r[0] = rd32(0x8057198cu);
        (void)tc_call(0x8022fe50u, &a);
    }
    r3 = rd32(r31 + 8u);
    if (((r3 >> 5u) & 1u) != 0u && ((rd32(r31 + 0xcu) >> 4u) & 1u) != 0u) {
        r0 = r3 & 0xffffffdfu;
        wr32(r31 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        if (rd32(0x80571984u) != 0u) {
            a.r[0] = 0x817fdd28u;
            (void)tc_call(0x80228148u, &a);
            a.r[0] = 0x817fdd28u;
            r3 = tc_call(0x80227f20u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(0x80571984u), &a);
            a.r[0] = 0x817fdd28u;
            (void)tc_call(0x80228148u, &a);
            a.r[0] = param_2;
            (void)tc_call(0x80227f20u, &a);
        }
    }
    return;
}
