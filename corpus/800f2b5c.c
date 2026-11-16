#include "tc_rt.h"

u32 fn_800f2b5c(s32 param_1, s32 param_2, u32 param_r5, u32 param_r6)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    r3 = tc_call(0x800622f8u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0x210u;
        r3 = tc_call(0x800dbd20u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (rd32((u32)param_1 + 0x208u) == 0u && rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fca4430u) != 0xffffffffu) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(0x800545e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fca4430u);
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            wr32((u32)param_1 + 0x208u, r3);
            a.r[0] = r3;
            r3 = tc_call(0x800f22bcu, &a);
            wr32((u32)param_1 + 0x208u, r3);
        }
        wr32((u32)param_1 + 0x20cu, 0xffffffffu);
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007dad4u, &a);
        wr8((u32)param_1 + 0x204u, rd8((rd32(r3 + 4u) * 0x38u) - 0x7fb64fcbu));
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007dad4u, &a);
        r0 = rd32(r3 + 4u);
        r3 = 1u;
        r0 = r0 * 0x38u;
        r0 = (u32)rd8(r0 - 0x7fb64fcau);
        wr8((u32)param_1 + 0x205u, (u8)r0);
    }
    return r3;
}
