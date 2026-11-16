#include "tc_rt.h"

void fn_802b13d0(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80541610u) != 0u) {
        a.r[0] = 0x80541606u;
        a.r[1] = param_r3;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            if ((u32)rd8(0x8054161cu) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x90003u;
                a.r[1] = 0x80397840u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = 0x805415a4u;
            (void)tc_call(0x8028d290u, &a);
            return;
        }
    }
    r30 = (u32)rd8(0x8054126du) + 1u;
    if ((s32)r30 >= 1) {
        r30 = 0u;
    }
    r3 = (r30 * 0x78u) - 0x7fabedf8u;
    r29 = r3 + 0x39cu;
    if ((u32)rd8(r3 + 0x408u) == 0u) {
        a.r[0] = r29;
        a.r[1] = 0u;
        a.r[2] = 0x78u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = r29 + 0x62u;
        a.r[1] = param_r3;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r29 + 0x18u;
        f1 = tc_callf(0x8028a0c0u, &a);
        wr8(r29 + 0x6du, (u8)param_r4);
        if ((u32)rd8(0x8054161cu) >= 4u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x90003u;
            a.r[1] = 0x80397850u;
            a.r[2] = 0x3cu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
        wr32(r29 + 0x10u, r29);
        a.r[0] = r29;
        a.r[1] = 0xbu;
        a.r[2] = 0x3cu;
        (void)tc_call(0x8028d220u, &a);
        wr8(0x8054126du, (u8)r30);
    }
    return;
}
