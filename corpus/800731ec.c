#include "tc_rt.h"

void fn_800731ec(void)
{
    u32 r3 = 0, r4 = 0, r24 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = 0u;
    r30 = 0x804863d8u;
    r31 = 0x804866e4u;
    do {
        if ((rd32(r31 + 0x18u) == 1u && rd32(r31) == 2u) && (rd32(r31 + 8u) == 2u && rd32(r31 + 0x10u) == 2u)) {
            wr32(r31 + 0x18u, 2u);
            a.r[0] = r29;
            r3 = tc_call(0x8007dae8u, &a);
            r24 = r3;
            a.r[0] = r3;
            r3 = tc_call(0x8007dad4u, &a);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            f1 = tc_callf(0x80082760u, &a);
            r3 = rd32(r30);
            a.r[0] = r3;
            a.r[1] = r24;
            a.r[2] = r31 + 0x1cu;
            a.r[3] = r31 + 0x28u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
            a.r[0] = 0x8046b7e4u;
            a.r[1] = rd32(r30);
            a.r[2] = 0u;
            r3 = tc_call(0x8007b0f4u, &a);
            if (r3 == 0u) {
                a.r[0] = 0x8046b7e4u;
                a.r[1] = rd32(r30);
                (void)tc_call(0x8007b03cu, &a);
            }
            a.r[0] = rd32(rd32(r30) + 0x268u);
            r3 = tc_call(0x800cf718u, &a);
            if (r3 == 0u) {
                a.r[0] = rd32(rd32(r30) + 0x268u);
                (void)tc_call(0x800cf688u, &a);
            }
            r3 = rd32(r30);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x8000000u);
            r3 = rd32(r30);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x20000000u);
            if (r29 == 0x18u) {
                a.r[0] = 0xbu;
                r3 = tc_call(0x80074e90u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r30);
                    a.r[1] = rd32(0x80486404u);
                    a.r[2] = 0x7cu;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800651d4u, &a);
                    r3 = rd32(r30);
                    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x20000000u);
                    r3 = rd32(r30);
                    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x4000000u);
                }
            }
            a.r[0] = r29;
            f1 = tc_callf(0x800a4490u, &a);
            r4 = tc_lastr4();
            r24 = 0u;
            do {
                r3 = rd32(r30);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x4cu), &a);
                r4 = tc_lastr4();
                r24 = r24 + 1u;
            } while (r24 < 0xau);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
        r31 = r31 + 0x34u;
    } while (r29 < 0x21u);
    return;
}
