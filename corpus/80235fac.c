#include "tc_rt.h"

void fn_80235fac(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) == 0u) {
        wr32(0x804e5ef8u, param_1);
    } else {
        wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a16cu, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if ((param_1 & 2u) != 0u) {
                a.r[0] = 0x1234567u;
                a.r[1] = 0x802355ecu;
                (void)tc_call(0x8023a598u, &a);
            } else {
                wr32(0x805715d8u, 0u);
                if ((((rd32(0x80571644u) == 4u || rd32(0x80571644u) == 5u) || (rd32(0x80571644u) == 0xdu || rd32(0x80571644u) == 0x21u)) || ((rd32(0x80571644u) == 0x22u || rd32(0x80571644u) == 0x29u) || (rd32(0x80571644u) == 0x2au || rd32(0x80571644u) == 0xfu))) || rd32(0x80571644u) == 0x25u) {
                    wr32(0x80571634u, 1u);
                }
                if (rd32(0x805715d0u) != 0u) {
                    r31 = rd32(0x80571650u);
                    wr32(0x805715d4u, 2u);
                    wr32(0x805715d0u, 0u);
                    wr32(0x80571650u, 0x804e5b60u);
                    wr32(r31 + 0xcu, 0xau);
                    r12 = rd32(r31 + 0x28u);
                    if (r12 != 0u) {
                        a.r[0] = 0xfffffffdu;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                    r12 = rd32(0x80571640u);
                    if (r12 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    (void)tc_call(0x80237c80u, &a);
                    r0 = 1u;
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    wr32(rd32(0x80571650u) + 0xcu, 0xbu);
                    r0 = rd32(0x805715e4u);
                    wr32(0x80571630u, 1u);
                    if (r0 == 0u && rd32(0x805715e8u) == 0u) {
                        wr32(0x805715e4u, 1u);
                        a.r[0] = 0x804e5bc0u;
                        (void)tc_call(0x8022671cu, &a);
                        r3 = tc_call(0x802302b4u, &a);
                        a.r[0] = 0x804e5bc0u;
                        a.r[1] = 0x10624dd3u;
                        a.r[2] = 0u;
                        a.r[3] = r3;
                        a.r[4] = 0u;
                        a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                        a.r[6] = 0x80237c5cu;
                        (void)tc_call(0x802269ecu, &a);
                    }
                }
            }
        }
    }
    return;
}
