#include "tc_rt.h"

u32 fn_8012be44(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8012c2ecu, &a);
    if (r3 == 0u) {
        r3 = 1u;
    } else {
        a.r[0] = (u32)param_1 + 0x5cu;
        a.r[1] = 1u;
        r3 = tc_call(0x800f857cu, &a);
        r31 = r3;
        a.r[0] = (u32)param_1 + 0x98u;
        (void)tc_call(0x80119f48u, &a);
        r3 = rd32((u32)param_1 + 0x44u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
        if ((s32)rd32((u32)param_1 + 0x7ecu) > 0) {
            a.r[0] = rd32((u32)param_1 + 0x54u);
            (void)tc_call(0x8012c6b4u, &a);
            a.r[0] = rd32((u32)param_1 + 0x58u);
            (void)tc_call(0x8012ceb4u, &a);
            r3 = rd32((u32)param_1 + 0x58u);
            if (r3 != 0u && rd32((u32)param_1 + 0x54u) != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8012d6e0u, &a);
                a.r[0] = rd32((u32)param_1 + 0x54u);
                a.r[1] = r3;
                (void)tc_call(0x8012c8b4u, &a);
            }
        }
        a.r[0] = (u32)param_1 + 0x61cu;
        (void)tc_call(0x80190ff8u, &a);
        a.r[0] = (u32)param_1 + 0x4a0u;
        (void)tc_call(0x8014b36cu, &a);
        a.r[0] = (u32)param_1 + 0x7f4u;
        (void)tc_call(0x8020f030u, &a);
        a.r[0] = (u32)param_1 + 0x82cu;
        (void)tc_call(0x8020f030u, &a);
        a.r[0] = (u32)param_1 + 0x864u;
        (void)tc_call(0x8020f030u, &a);
        f1 = tc_callf(0x80103018u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
        r3 = r31;
    }
    return r3;
}
