#include "tc_rt.h"

void fn_802f4cc0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r21 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_r3 + 0x18u) != 0u) {
        while (rd32(param_r3 + 0x18u) != 0u) {
            r3 = rd32(param_r3 + 0x1cu);
            r12 = rd32(r3 - 8u);
            r21 = r3 - 0x40u;
            if (r12 != 0u) {
                a.r[0] = r21;
                a.r[1] = 1u;
                a.r[2] = rd32(r21 + 0x3cu);
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            if ((u32)(s8)rd8(0x80571d78u) == 0u) {
                wr32(0x80548380u, 0u);
                wr32(0x80548384u, 0u);
                wr32(0x8054838cu, 0u);
                wr32(0x80548390u, 0u);
                wr32(0x80548398u, 0u);
                wr32(0x8054839cu, 0u);
                wr32(0x8054837cu, 0u);
                wr32(0x80548380u, 0x80548380u);
                wr32(0x80548384u, 0x80548380u);
                wr32(0x80548388u, 0u);
                wr32(0x8054838cu, 0x8054838cu);
                wr32(0x80548390u, 0x8054838cu);
                wr32(0x80548394u, 0u);
                wr32(0x80548398u, 0x80548398u);
                wr32(0x8054839cu, 0x80548398u);
                wr8(0x805483a0u, 0u);
                a.r[0] = 0x8054837cu;
                a.r[1] = 0x802f475cu;
                a.r[2] = 0x80548370u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571d78u, 1u);
            }
            r3 = tc_call(0x8022c2b0u, &a);
            r0 = rd32(r21);
            r30 = r3;
            if (r0 != 0u) {
                a.r[0] = r0;
                (void)tc_call(0x802434b8u, &a);
            }
            a.r[0] = r21;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x802f1c60u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            if ((u32)rd8(r21 + 0x1du) != 0u) {
                r21 = r21 + 0x40u;
                a.r[0] = 0x80548394u;
                a.r[1] = r21;
                (void)tc_call(0x802debd0u, &a);
            } else {
                r21 = r21 + 0x40u;
                a.r[0] = 0x8054837cu;
                a.r[1] = r21;
                (void)tc_call(0x802debd0u, &a);
            }
            wr32(0x817fdfc8u, 0x8054838cu);
            a.r[0] = 0x80548388u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = r21;
            (void)tc_call(0x802deba4u, &a);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r30;
            f1 = tc_callf(0x8022c2d8u, &a);
        }
    }
    return;
}
