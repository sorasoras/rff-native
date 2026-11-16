#include "tc_rt.h"

void fn_800b2850(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)rd8((u32)param_1 + 0x162cu) != 0u) {
        r6 = rd32((u32)param_1 + 0xcf8u);
        wr32(0x817fdfecu, rd32((u32)param_1 + 0xcf4u));
        wr32(0x817fdff0u, r6);
        wr32(0x817fdff4u, rd32((u32)param_1 + 0xcfcu));
        wr16(0x817fdfe8u, 0x2e8u);
        wr8(0x817fdfeau, 1u);
        wr8(0x817fdfebu, 1u);
        a.r[0] = rd32((u32)param_1 + 0xda0u);
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x80183710u, &a);
        if ((u32)rd16(0x817fdfe8u) != 0x2e8u) {
            r3 = tc_call(0x8006bb94u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xe0u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r31 = r3;
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0xe0u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xe0u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                }
                r31 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x801a66e4u, &a);
            }
            if (r31 != 0u) {
                a.r[0] = r31;
                a.r[1] = (u32)rd16(0x817fdfe8u);
                a.r[2] = 0x817fdfecu;
                a.r[3] = 0x804890c8u;
                a.r[4] = (u32)rd8(0x817fdfebu);
                a.r[5] = (u32)rd8(0x817fdfeau);
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r31) + 0x48u), &a);
                wr32(r31 + 0x7cu, 1u);
                a.r[0] = r31;
                a.r[1] = (u32)param_1 + 0xcf4u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 0x50u), &a);
                a.r[0] = r31;
                (void)tc_call(0x801a6adcu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = 0x7d1u;
                (void)tc_call(0x800aef78u, &a);
            }
        }
    }
    return;
}
