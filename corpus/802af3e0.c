#include "tc_rt.h"

void fn_802af3e0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r27 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = (u32)rd8(param_3 + 9u);
    a.r[0] = param_1;
    a.r[1] = (u32)rd8(param_3);
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        wr8(0x817fdfd8u, 0u);
        if ((r27 & 4u) != 0u) {
            wr8(0x817fdfd8u, 1u);
        }
        if ((r27 & 8u) != 0u) {
            wr8(0x817fdfd8u, (u8)((u32)rd8(0x817fdfd8u) | 2u));
        }
        if ((r27 & 0x40u) != 0u) {
            wr8(0x817fdfd8u, (u8)((u32)rd8(0x817fdfd8u) | 4u));
        }
        if ((r27 & 0x80u) != 0u) {
            wr8(0x817fdfd8u, (u8)((u32)rd8(0x817fdfd8u) | 8u));
        }
        wr8(0x817fdfdcu, (u8)((r27 >> 1u) & 1u));
        if ((u32)rd8(param_3 + 0xau) != 0u) {
            r5 = (u32)rd8(param_3 + 0xbu);
        } else {
            r5 = 0u;
        }
        wr8(0x817fdfd9u, (u8)r5);
        wr8(0x817fdfdau, 0u);
        wr8(0x817fdfdbu, 1u);
        if (param_2 != 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(param_3);
            a.r[2] = 0u;
            a.r[3] = 0x817fdfd8u;
            f1 = tc_callf(0x802b0360u, &a);
            if ((u32)rd8(rd32(r31 + 0x6cu) + 0x72u) != 2u) {
                r3 = (u32)rd8(0x817fdfdcu);
                wr8(r31 + 0x63u, (u8)r3);
                if (r3 != (u32)rd8(r31 + 0x24u)) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1;
                    a.r[1] = (u32)rd8(param_3);
                    a.r[2] = (ppc_cntlzw(r3) >> 5u) & 0xffu;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802ac72cu, &a);
                }
            }
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(param_3);
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x802ac088u, &a);
        } else {
            r4 = (u32)rd8(r3 + 0x69u);
            if ((r4 & 8u) != 0u) {
                wr8(r3 + 0x69u, (u8)(r4 & 0xfffffff7u));
                r3 = r3;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r3;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b16fcu, &a);
                a.r[0] = rd32(r31 + 0x6cu);
                a.r[1] = (u32)rd8(r31 + 0xdu);
                (void)tc_call(0x802ac200u, &a);
            }
        }
    }
    return;
}
