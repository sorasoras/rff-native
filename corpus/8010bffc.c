#include "tc_rt.h"

u32 fn_8010bffc(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7460u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x8010b96cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 3u;
    r3 = tc_call(0x800adf14u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    r29 = 0u;
    do {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(((r30 << 2u) & 0xfffffffcu) - 0x7fc9e918u), &a);
        f1 = tc_lastf();
        if (r3 == 1u || r3 == 2u) break;
        r4 = r30 + 1u;
        r29 = r29 + 1u;
        r0 = (r4 << 0x1eu) & 0xc0000000u;
        r4 = (r4 >> 0x1fu) & 1u;
        r0 = r0 - r4;
        r0 = (r0 << 2u) | (r0 >> 0x1eu);
        r30 = r0 + r4;
    } while ((s32)r29 < 4);
    if (r3 != 2u) {
        r30 = r30 + 1u;
        r3 = (r30 >> 0x1fu) & 1u;
        r0 = ((r30 << 0x1eu) & 0xc0000000u) - r3;
        r0 = (r0 << 2u) | (r0 >> 0x1eu);
        r3 = r0 + r3;
        a.r[0] = r3;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8010b974u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
