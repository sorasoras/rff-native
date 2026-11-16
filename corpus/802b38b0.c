#include "tc_rt.h"

void fn_802b38b0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 1u;
    a.r[0] = (u32)param_1 + 8u;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = (u32)param_2 + (u32)rd16((u32)param_2 + 4u);
    r31 = (u32)rd8(r4 + 8u);
    c0lt = (s32)r31 < 5;
    wr16((u32)param_2 + 2u, (u16)((u32)rd16((u32)param_2 + 2u) - 1u));
    if (r31 == 5u) {
        if ((u32)rd8((u32)param_1 + 0x474u) == 2u) {
            r4 = r4 + 9u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b3b38u, &a);
            r30 = 0u;
        }
    } else if (!c0lt) {
        if (r31 == 7u && (u32)rd8((u32)param_1 + 0x474u) == 3u) {
            r4 = r4 + 9u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b3de0u, &a);
            r30 = 0u;
        }
    } else if (r31 == 3u && (u32)rd8((u32)param_1 + 0x474u) == 1u) {
        r4 = r4 + 9u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802b39f0u, &a);
        r30 = 0u;
    }
    if (r30 != 0u) {
        if ((u32)rd8(0x80545c50u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0001u;
            a.r[1] = 0x803979b8u;
            a.r[2] = r31;
            a.r[3] = (u32)rd8((u32)param_1 + 0x474u);
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc84u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfff3u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b5264u, &a);
    }
    return;
}
