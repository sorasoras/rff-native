#include "tc_rt.h"

void fn_8028ea40(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r23 = 0, r24 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = (u32)rd16(0x80577352u);
    wr16(0x817fdfb8u, rd16(0x80577350u));
    wr16(0x817fdfbau, (u16)r0);
    r31 = 1u;
    for (;;) {
        r0 = (u32)rd8(0x8053d5e8u);
        c0lt = r0 < 0x17u;
        if (!c0lt) break;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = rd32(0x8053d584u) & r0;
        if (r0 != 0u) {
            a.r[0] = 0xfau;
            r3 = tc_call(0x8028a0d4u, &a);
            f1 = tc_lastf();
            wr32(0x8053d58cu, r3);
            if (r3 != 0u) {
                r3 = (u32)rd8(0x8053d5e8u);
                r0 = (r3 << 1u) & 0xfffffffeu;
                r3 = ((r3 & 0x20u) != 0u) ? 0u : (1u << (r3 & 0x1fu));
                r0 = (u32)rd16(r0 - 0x7fcb7e30u);
                r3 = rd32(0x8053d584u) & ~r3;
                wr32(0x8053d584u, r3);
                wr16(0x817fdfbcu, 2u);
                wr16(0x817fdfc0u, (u16)r0);
                if (r0 == 0x1200u) {
                    r31 = 2u;
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = rd32(0x8053d58cu);
                a.r[1] = 0xfau;
                a.r[2] = 1u;
                a.r[3] = 0x817fdfbcu;
                a.r[4] = r31;
                a.r[5] = 0x817fdfb8u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b1b2cu, &a);
                a.r[0] = param_r3;
                a.r[1] = rd32(0x8053d58cu);
                a.r[2] = 0x8028ecc0u;
                r3 = tc_call(0x802b1f00u, &a);
                if ((r3 & 0xffu) == 0u) {
                    a.r[0] = rd32(0x8053d58cu);
                    (void)tc_call(0x8028a35cu, &a);
                    wr32(0x8053d58cu, 0u);
                    wr8(0x8053d5e8u, 0x17u);
                } else {
                    wr8(0x8053d5e8u, (u8)((u32)rd8(0x8053d5e8u) + 1u));
                    return;
                }
            }
        }
        wr8(0x8053d5e8u, (u8)((u32)rd8(0x8053d5e8u) + 1u));
    }
    if (!c0lt) {
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        r24 = r3;
        if (r3 != 0u) {
            wr16(r3, 0x208u);
            wr32(r3 + 0x108u, rd32(0x8053d588u));
            r3 = r3 + 8u;
            a.r[0] = r3;
            a.r[1] = 0x8053d592u;
            (void)tc_call(0x8028d2a4u, &a);
            r23 = 0x8053d598u;
            if ((u32)(s8)rd8(0x8053d598u) == 0u) {
                a.r[0] = 0x8053d592u;
                r3 = tc_call(0x802950e8u, &a);
                if (r3 != 0u) {
                    r23 = r3;
                }
            }
            a.r[0] = r24 + 0xeu;
            a.r[1] = r23;
            a.r[2] = 0x20u;
            (void)tc_call(0x8025bdf4u, &a);
            a.r[0] = r24;
            (void)tc_call(0x8028d750u, &a);
        }
    }
    return;
}
