#include "tc_rt.h"

void fn_8029b8e4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        r12 = rd32(0x8053f278u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r3 + 0x22u;
            a.r[2] = r3 + 0x35u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
        r0 = (u32)rd8(r31 + 0x7fu);
        if (r0 == 4u || r0 == 1u) {
            wr8(r31 + 0x7fu, 0u);
            if ((u32)rd8(r31 + 0x80u) != 0u) {
                r4 = rd32(r31);
                if (r4 != 0u && rd32(r4) == 3u) {
                    wr32(r4 + 4u, 0u);
                }
            }
            wr32(r31 + 4u, 0u);
        }
    }
    return;
}
