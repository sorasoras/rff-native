#include "tc_rt.h"

u32 fn_80298068(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8053f03cu;
    r4 = 0xffffffffu;
    r30 = 0x8053f03cu;
    r3 = 0u;
    ctr = 0xcu;
    do {
        if ((u32)rd8(r31 + 0x1au) == 0u) {
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0x1cu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = r31 + 0xau;
            a.r[1] = param_1;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            r3 = r31;
            wr8(r31 + 0x1au, 1u);
            return r3;
        }
        r0 = rd32(r31);
        if (r0 < r4) {
            r30 = r31;
            r4 = r0;
        }
        r3 = r3 + 1u;
        r31 = r31 + 0x1cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r12 = rd32(0x8053f014u);
    if (r12 != 0u) {
        a.r[0] = r30 + 8u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    }
    a.r[0] = r30;
    a.r[1] = 0u;
    a.r[2] = 0x1cu;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = r30 + 0xau;
    a.r[1] = param_1;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    r3 = r30;
    wr8(r30 + 0x1au, 1u);
    return r3;
}
