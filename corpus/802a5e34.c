#include "tc_rt.h"

s32 fn_802a5e34(u32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80540a20u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80002u;
        a.r[1] = 0x80395a4cu;
        a.r[2] = param_1;
        a.r[3] = (u32)rd16((u32)param_2 + 2u);
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc84u, &a);
    }
    a.r[0] = 0u;
    a.r[1] = param_1;
    r3 = tc_call(0x802aae88u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80001u;
            a.r[1] = 0x80395a74u;
            a.r[2] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
        r3 = 0u;
    } else {
        if ((u32)rd16((u32)param_2 + 2u) <= (u32)rd16(r3 + 0x3au)) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x1du;
            a.r[2] = (u32)param_2;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802a6140u, &a);
            r3 = (u32)rd8(rd32(r30 + 0x10u) + 0x41u);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
            r3 = r3 + 1u;
        } else {
            if ((u32)rd8(0x80540a20u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80001u;
                a.r[1] = 0x80395aa0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = (u32)param_2;
            (void)tc_call(0x8028a35cu, &a);
            r3 = 0u;
        }
    }
    return (s32)r3;
}
