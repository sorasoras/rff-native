#include "tc_rt.h"

u32 fn_80232a4c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x817fdfa4u;
    r3 = tc_call(0x8027293cu, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdfa4u;
        a.r[1] = 0x817fdf58u;
        r3 = tc_call(0x80271804u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = 0u;
        } else {
            r31 = (u32)rd16(0x817fdf5cu);
            if (r31 == 2u) {
                r3 = tc_call(0x802266a4u, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0x80u) {
                    r3 = tc_call(0x80225448u, &a);
                    f1 = tc_lastf();
                    r3 = r3 & 0xf0000000u;
                    if ((r3 - 0x10000000u) == 0u) {
                        r3 = tc_call(0x80239700u, &a);
                        f1 = tc_lastf();
                        r31 = (u32)rd16(r3 + 4u);
                    }
                }
            }
            if ((u32)param_3 != 0u) {
                r3 = tc_call(0x80239700u, &a);
                r0 = (u32)rd16(r3 + 4u);
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x817fdf60u;
                a.r[1] = 0x80386c80u;
                a.r[2] = param_1;
                a.r[3] = param_2;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8025b994u, &a);
                a.r[0] = 0x817fdf60u;
                a.r[1] = 0x817fdf58u;
                r3 = tc_call(0x80271804u, &a);
                if (r3 != 0u) {
                    r3 = 0u;
                    return r3;
                }
                r0 = (u32)rd16(0x817fdf5cu);
            }
            r0 = r0 - r31;
            r0 = ppc_cntlzw(r0);
            r3 = (r0 >> 5u) & 0x7ffffffu;
        }
    }
    return r3;
}
