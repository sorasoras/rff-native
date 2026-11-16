#include "tc_rt.h"

void fn_802f4890(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r12 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r25 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
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
    r3 = tc_call(0x8022c2b0u, &a);
    r20 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r19 = r3;
    if (rd32(param_1 + 0x18u) != 0u) {
        while (rd32(param_1 + 0x18u) != 0u) {
            r3 = rd32(param_1 + 0x1cu);
            r12 = rd32(r3 - 8u);
            r25 = r3 - 0x40u;
            if (r12 != 0u) {
                a.r[0] = r25;
                a.r[1] = 1u;
                a.r[2] = rd32(r25 + 0x3cu);
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
            r0 = rd32(r25);
            r18 = r3;
            if (r0 != 0u) {
                a.r[0] = r0;
                (void)tc_call(0x802434b8u, &a);
            }
            a.r[0] = r25;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x802f1c60u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r17 = r3;
            if ((u32)rd8(r25 + 0x1du) != 0u) {
                r25 = r25 + 0x40u;
                a.r[0] = 0x80548394u;
                a.r[1] = r25;
                (void)tc_call(0x802debd0u, &a);
            } else {
                r25 = r25 + 0x40u;
                a.r[0] = 0x8054837cu;
                a.r[1] = r25;
                (void)tc_call(0x802debd0u, &a);
            }
            wr32(0x817fdfacu, 0x8054838cu);
            a.r[0] = 0x80548388u;
            a.r[1] = 0x817fdfacu;
            a.r[2] = r25;
            (void)tc_call(0x802deba4u, &a);
            a.r[0] = r17;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r18;
            f1 = tc_callf(0x8022c2d8u, &a);
        }
    }
    if (rd32(param_1 + 0xcu) == 0u) {
        a.r[0] = r19;
        (void)tc_call(0x8022c2d8u, &a);
        r18 = 0u;
    } else {
        r5 = rd32(param_1 + 0x10u);
        wr32(0x817fdfb0u, r5);
        r16 = r5 - 0x40u;
        a.r[0] = param_1 + 0xcu;
        a.r[1] = 0x817fdfb0u;
        (void)tc_call(0x802deab0u, &a);
        r18 = r16;
        if (r16 != 0u) {
            a.r[0] = r16;
            r3 = tc_call(0x802f1c1cu, &a);
            r18 = r3;
        }
        wr32(0x817fdfb4u, param_1 + 4u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfb4u;
        a.r[2] = r16 + 0x40u;
        (void)tc_call(0x802deba4u, &a);
        a.r[0] = r19;
        (void)tc_call(0x8022c2d8u, &a);
    }
    if (r18 == 0u) {
        a.r[0] = r20;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = 0x802f258cu;
        a.r[2] = r18;
        r3 = tc_call(0x80243534u, &a);
        if (r3 == 0u) {
            a.r[0] = r18;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x802f1c60u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r17 = r3;
            if ((u32)rd8(r18 + 0x1du) != 0u) {
                r16 = r18 + 0x40u;
                a.r[0] = param_1 + 0x18u;
                a.r[1] = r16;
                (void)tc_call(0x802debd0u, &a);
            } else {
                r16 = r18 + 0x40u;
                a.r[0] = param_1;
                a.r[1] = r16;
                (void)tc_call(0x802debd0u, &a);
            }
            wr32(0x817fdfa8u, param_1 + 0x10u);
            a.r[0] = param_1 + 0xcu;
            a.r[1] = 0x817fdfa8u;
            a.r[2] = r16;
            (void)tc_call(0x802deba4u, &a);
            a.r[0] = r17;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r20;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = r18;
            a.r[1] = r3;
            (void)tc_call(0x802f3fc4u, &a);
            wr32(r18 + 0x38u, param_3);
            wr32(r18 + 0x3cu, param_4);
            a.r[0] = r20;
            (void)tc_call(0x8022c2d8u, &a);
        }
    }
    return;
}
