#include "tc_rt.h"

void fn_800736dc(void)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = rd32(0x8046ad74u);
    while (r28 != 0u) {
        r3 = r28;
        r28 = rd32(r28);
        r31 = rd32(r3 + 8u);
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x18u), &a);
        r4 = tc_lastr4();
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 8u), &a);
            r4 = tc_lastr4();
        }
    }
    a.r[0] = 0x8046ad74u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x8046ad9cu;
    (void)tc_call(0x8007ae84u, &a);
    r28 = 0x8048645cu;
    r27 = 0u;
    do {
        r3 = 0u;
        if ((u32)rd8(r28) != 0u) {
            r3 = 1u;
        }
        if (r3 != 0u) {
            a.r[0] = r27;
            r3 = tc_call(0x800eb41cu, &a);
            r26 = r3;
            if (r3 == 0xffffffffu) {
                r26 = r27;
            }
            a.r[0] = 0x80469958u;
            a.r[1] = r26;
            a.r[2] = 1u;
            (void)tc_call(0x800587ccu, &a);
            a.r[0] = r26;
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x8046a200u;
            a.r[1] = rd32(r3 + 0xcu);
            a.r[2] = 1u;
            (void)tc_call(0x80058f78u, &a);
            wr8(r28, 0u);
        }
        r27 = r27 + 1u;
        r28 = r28 + 1u;
    } while (r27 < 0xabu);
    wr32(0x80571140u, 0u);
    (void)tc_call(0x800eb408u, &a);
    a.r[0] = 0x80486508u;
    a.r[1] = 0u;
    a.r[2] = 0xabu;
    (void)tc_call(0x8000443cu, &a);
    return;
}
