#include "tc_rt.h"

void fn_80074d38(void)
{
    u32 r3 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32(0x8046ae1cu) != 0u) {
        a.r[0] = 0x8046ae14u;
        r3 = tc_call(0x8007b09cu, &a);
        r28 = r3;
        a.r[0] = 0x8046adecu;
        a.r[1] = rd32(r3 + 0xfcu);
        (void)tc_call(0x8007aff0u, &a);
        a.r[0] = r28 + 0x80u;
        f1 = tc_callf(0x800cb5a8u, &a);
        a.r[0] = r28;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r28) + 0x18u), &a);
        if (r28 != 0u) {
            a.r[0] = r28;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r28) + 8u), &a);
        }
    }
    return;
}
