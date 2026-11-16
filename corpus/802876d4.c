#include "tc_rt.h"

void fn_802876d4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_1 != 0u) {
        r5 = (u32)rd8(0x80571b39u);
        r0 = (u32)rd8(0x80571b3au);
        if (r0 == r5) {
            a.r[0] = 0x80287328u;
            (void)tc_call(0x802956d0u, &a);
            return;
        }
        r3 = r0 - r5;
        r0 = 0x13u;
        if ((s32)r3 < 19) {
            r0 = r3;
        }
        r31 = r0 & 0xffu;
        wr8(0x817fdef8u, (u8)r0);
        r30 = r31 * 0xdu;
        a.r[0] = 0x817fdef9u;
        a.r[1] = (r5 * 0xdu) - 0x7fc6e3b7u;
        a.r[2] = r30;
        f1 = tc_callf(0x80004338u, &a);
        wr8(0x80571b39u, (u8)((u32)rd8(0x80571b39u) + r31));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xfc4fu;
        a.r[1] = (r30 + 1u) & 0xffu;
        a.r[2] = 0x817fdef8u;
        a.r[3] = 0x802876d4u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802966ccu, &a);
    } else {
        a.r[0] = 0x80287328u;
        (void)tc_call(0x802956d0u, &a);
    }
    return;
}
