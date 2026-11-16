#include "tc_rt.h"

void fn_80284d7c(void)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(0x8050f7ebu, 0u);
    wr8(0x8050f7eau, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    (void)tc_call(0x8028feccu, &a);
    if ((u32)(s8)rd8(0x8050f7e8u) == 0u) {
        return;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = (u32)rd8(0x8050f7e5u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r30 == 4u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = (u32)rd8(0x8050f7e4u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        if (r30 == 4u) {
            return;
        }
    }
    if ((u32)rd8(0x8050f7e7u) != 0u) {
        r27 = 0u;
        r28 = 0u;
        do {
            r3 = tc_call(0x8022c2b0u, &a);
            if ((s32)r27 >= 0 && (s32)r27 < 10) {
                r30 = r28 - 0x7faf0e1cu;
            } else {
                r30 = ((r27 - 0xau) * 0x60u) - 0x7faf0a5cu;
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            if ((u32)rd8(r30 + 0x59u) == 9u) {
                wr8(0x817fdfe0u, 0u);
                r3 = (u32)rd8(0x8050f80au);
                wr16(0x817fdfd8u, 0u);
                wr16(0x817fdfdau, 0u);
                wr16(0x817fdfdcu, 1u);
                wr16(0x817fdfdeu, 0u);
                a.r[0] = r3;
                a.r[1] = r30 + 0x40u;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x80298becu, &a);
                return;
            }
            r27 = r27 + 1u;
            r28 = r28 + 0x60u;
        } while ((s32)r27 < 16);
    }
    r3 = (u32)rd8(0x8050f7e8u);
    if ((s32)(s8)r3 > 0) {
        wr8(0x8050f7e8u, (u8)(r3 - 1u));
    }
    wr16(0x8050f848u, 0x32u);
    return;
}
