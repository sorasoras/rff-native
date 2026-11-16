#include "tc_rt.h"

u32 fn_80295188(u32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = 0x8053d958u;
    r31 = 0u;
    r3 = 0u;
    ctr = 0x10u;
    do {
        if (((u32)rd8(r4 + 0x1fa6u) & 0x80u) == 0u) {
            r3 = (r3 * 0x88u) - 0x7fac26a8u;
            r31 = r3 + 0x1f30u;
            break;
        }
        r4 = r4 + 0x88u;
        r3 = r3 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (r31 == 0u) {
        r3 = tc_call(0x802953e8u, &a);
        r31 = r3;
    }
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0x88u;
    f1 = tc_callf(0x8000443cu, &a);
    wr8(r31 + 0x76u, 0x80u);
    wr8(r31 + 0x85u, 0u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = param_1;
    r3 = tc_call(0x80297a6cu, &a);
    r4 = r3;
    if (r3 == 0u) {
        a.r[0] = r31 + 0x22u;
        a.r[1] = 0x80540112u;
        a.r[2] = 3u;
        (void)tc_call(0x80004338u, &a);
    } else {
        r4 = r4 + 8u;
        a.r[0] = r31 + 0x22u;
        a.r[1] = r4;
        a.r[2] = 3u;
        (void)tc_call(0x80004338u, &a);
    }
    a.r[0] = r31 + 0x1cu;
    a.r[1] = param_1;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x802940e8u, &a);
    wr16(r31 + 0x18u, (u16)r3);
    r4 = rd32(0x8053f2ccu);
    wr32(r31 + 0xcu, r4);
    wr32(0x8053f2ccu, r4 + 1u);
    return r31;
}
