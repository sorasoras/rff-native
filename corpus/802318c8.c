#include "tc_rt.h"

void fn_802318c8(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x802253dcu, &a);
    r0 = (u32)rd8(0x817fdfe9u);
    if (r0 > 4u) {
        if (r0 == 9u) {
            return;
        }
        r3 = tc_call(0x8023197cu, &a);
        f1 = tc_lastf();
        c0lt = (s32)r3 < 0;
        if (r3 != 0u) {
            if (c0lt) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386ab8u;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
            }
            r3 = tc_call(0x80231ac8u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386aecu;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
            }
        }
        if (rd32(0x80571448u) == 0u) {
            a.r[0] = 0u;
            r3 = tc_call(0x80231a34u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386b20u;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
            }
        }
    }
    return;
}
