#include "tc_rt.h"

u32 fn_80284fe8(void)
{
    u32 r3 = 0, r12 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)rd8(0x8050f7e7u) != 0u) {
        r28 = 0u;
        r30 = 0u;
        do {
            r3 = tc_call(0x8022c2b0u, &a);
            if ((s32)r28 >= 0 && (s32)r28 < 10) {
                r31 = r30 - 0x7faf0e1cu;
            } else {
                r31 = ((r28 - 0xau) * 0x60u) - 0x7faf0a5cu;
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            if ((u32)rd8(r31 + 0x59u) == 8u) {
                wr8(0x817fdfe0u, 2u);
                r3 = (u32)rd8(0x8050f80au);
                wr16(0x817fdfd8u, 8u);
                wr16(0x817fdfdau, 8u);
                wr16(0x817fdfdcu, 1u);
                wr16(0x817fdfdeu, 0u);
                a.r[0] = r3;
                a.r[1] = r31 + 0x40u;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x80298becu, &a);
                r3 = 0xeu;
                return r3;
            }
            r28 = r28 + 1u;
            r30 = r30 + 0x60u;
        } while ((s32)r28 < 16);
    }
    a.r[0] = 0x8050f810u;
    f1 = tc_callf(0x80226a70u, &a);
    if (rd32(0x80571b34u) == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        wr8(0x8050f7ebu, 0u);
        wr8(0x8050f7eau, 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = 0u;
        a.r[1] = 1u;
        f1 = tc_callf(0x8028feccu, &a);
    }
    if ((u32)rd8(0x8050f7e9u) == 0u) {
        r12 = rd32(0x8050f100u);
    } else {
        r12 = rd32(0x8050f104u);
    }
    if (r12 != 0u) {
        a.r[0] = 1u;
        a.r[1] = (u32)rd8(0x8050f7e6u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    (void)tc_call(0x80289ba4u, &a);
    r3 = 0u;
    return r3;
}
