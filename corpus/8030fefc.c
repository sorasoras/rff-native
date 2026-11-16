#include "tc_rt.h"

u32 fn_8030fefc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = param_3;
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r31 = (u32)rd8((u32)param_1 + 0xf8u) + 0x40u;
    a.r[0] = param_2;
    a.r[1] = (u32)param_1 + 0x124u;
    a.r[2] = 0x817fdf58u;
    a.r[3] = 0x817fdf70u;
    a.r[4] = rd32((u32)param_1 + 0x104u);
    a.r[5] = rd32((u32)param_1 + 0x108u);
    a.r[6] = 0u;
    a.r[7] = param_3;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0xcu), &a);
    if (r3 == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
    } else {
        r0 = rd32((u32)param_1 + 0x10cu);
        if (r0 == 0u) {
            r30 = rd32((u32)param_1 + 0x110u);
        } else {
            if (r0 == 1u) {
                r3 = rd32((u32)param_1 + 0x110u);
                r0 = rd32(0x817fdf7cu);
                r4 = r3 * r0;
                r3 = ppc_mulhw((s32)r3, (s32)r0);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0x3e8u;
                (void)tc_call(0x80255b5cu, &a);
                r30 = tc_lastr4();
            }
        }
        if (r30 > rd32(0x817fdf84u)) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
            r3 = 0u;
        } else {
            r0 = rd32(0x817fdf78u);
            r3 = 2u;
            r4 = rd32((u32)param_1 + 0xf4u);
            if ((s32)r0 <= 2) {
                r3 = r0;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r31;
            a.r[3] = 0x80310528u;
            a.r[4] = (u32)param_1;
            r3 = tc_call(0x802f838cu, &a);
            r31 = r3;
            if (r3 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
            } else {
                a.r[0] = r3;
                a.r[1] = (u32)rd8(0x817fdf5cu);
                (void)tc_call(0x802f909cu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf5du);
                (void)tc_call(0x802f90b4u, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf5eu);
                (void)tc_call(0x802f90ccu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf5fu);
                (void)tc_call(0x802f916cu, &a);
                a.r[0] = r31;
                a.r[1] = (u32)rd8(0x817fdf60u);
                (void)tc_call(0x802f9174u, &a);
                wr8(r31 + 0x39u, rd8((u32)param_1 + 0xecu));
                a.r[0] = r31;
                a.r[1] = 0x817fdf70u;
                a.r[2] = 0xffffffffu;
                a.r[3] = r30;
                (void)tc_call(0x802f7f80u, &a);
                wr32((u32)param_1 + 0x130u, r31);
                wr8((u32)param_1 + 0xebu, 1u);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 1u;
            }
        }
    }
    return r3;
}
