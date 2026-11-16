#include "tc_rt.h"

void fn_80297df0(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x8053f01cu;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = tc_lastr4();
    r3 = (u32)rd8(0x8053f1a0u);
    if (r3 != 0u) {
        wr8(0x8053f1a0u, 0u);
        if (((r3 + 0xffu) & 0xffu) <= 1u) {
            r12 = rd32(0x8053f008u);
            if (r12 != 0u) {
                wr8(0x817fdee9u, 0u);
                a.r[0] = 0x817fdee9u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r4 = tc_lastr4();
            }
        }
    }
    if (((u32)rd8(0x8053f006u) & 1u) != 0u) {
        a.r[0] = 0x8053efd8u;
        (void)tc_call(0x8028d290u, &a);
        wr8(0x8053f006u, 0u);
        a.r[0] = 0x8053f000u;
        a.r[1] = 0u;
        a.r[2] = 6u;
        f1 = tc_callf(0x8000443cu, &a);
        r4 = tc_lastr4();
        r12 = rd32(0x8053efd4u);
        if (r12 != 0u) {
            wr16(0x817fdeecu, 0xcu);
            a.r[0] = 0x817fdeecu;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
            wr32(0x8053efd4u, 0u);
        }
    }
    if ((u32)rd8(0x8053f19cu) != 0u) {
        r12 = rd32(0x8053f010u);
        wr8(0x8053f19cu, 0u);
        if (r12 != 0u) {
            wr8(0x817fdee8u, 0xcu);
            a.r[0] = 0x817fdee8u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
        }
    }
    wr8(0x8053f19fu, 0u);
    r28 = 0u;
    wr8(0x8053f19du, 0u);
    r27 = 0x8053f03cu;
    wr32(0x8053f00cu, 0u);
    do {
        if ((u32)rd8(r27 + 0x1au) != 0u) {
            wr8(r27 + 0x1au, 0u);
            r12 = rd32(0x8053f014u);
            if (r12 != 0u) {
                a.r[0] = r27 + 8u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
        }
        r28 = r28 + 1u;
        r27 = r27 + 0x1cu;
    } while (r28 < 0xcu);
    r3 = rd32(0x8053f034u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8028a35cu, &a);
        wr32(0x8053f034u, 0u);
    }
    wr16(0x8053f038u, 0u);
    wr16(0x8053f03au, 0u);
    wr16(0x8053eff0u, 0u);
    wr16(0x8053eff2u, 0u);
    wr16(0x8053effeu, 0u);
    wr16(0x8053effcu, 0u);
    return;
}
