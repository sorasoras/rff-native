#include "tc_rt.h"

void fn_802a2610(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = (u32)rd8(0x80540610u);
    wr8(0x817fdfe8u, (u8)param_1);
    wr16(0x817fdfeau, (u16)param_3);
    if (r0 != 0u) {
        wr8(0x8054053eu, 0u);
        if (((u32)param_1 & 0xffu) == 0u) {
            r0 = (u32)rd8(0x80540548u);
            r3 = param_3 & 0xffffu;
            wr8(0x8054053au, (u8)param_2);
            wr16(0x8054053cu, (u16)param_3);
            if (r0 == 0xffu) {
                if (param_2 == 0u) {
                    a.r[0] = 0x80540540u;
                    a.r[1] = 0x8054051cu;
                    a.r[2] = 0xau;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = 0x8054051cu;
                    (void)tc_call(0x802a2438u, &a);
                    wr8(0x8054053fu, 0u);
                    wr32(0x80540514u, 0x802a2768u);
                    a.r[0] = 0x80540504u;
                    a.r[1] = 0x16u;
                    a.r[2] = 0x3cu;
                    f1 = tc_callf(0x8028d220u, &a);
                }
            } else if (r0 != param_2 || (r0 != 0u && (r3 < (u32)rd16(0x80540542u) || r3 > (u32)rd16(0x80540540u)))) {
                a.r[0] = 0x80540540u;
                f1 = tc_callf(0x802a2438u, &a);
            } else {
                wr8(0x80540548u, 0xffu);
            }
            r12 = rd32(0x80540594u);
            if (r12 != 0u) {
                a.r[0] = 3u;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfeau;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
        } else {
            r12 = rd32(0x80540594u);
            if (r12 != 0u) {
                a.r[0] = 4u;
                a.r[1] = (u32)rd8(0x8054053fu);
                a.r[2] = 0x817fdfe8u;
                a.f[0] = 0.0;
                (void)tc_call(r12, &a);
            }
        }
    }
    return;
}
