#include "tc_rt.h"

void fn_8006f570(f64 param_1, f64 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, s32 param_7, u32 param_8)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f4 = (f64)rdf32(param_5);
    f3 = (f64)rdf32(param_5 + 4u);
    f0 = (f64)rdf32(param_5 + 8u);
    wr32((u32)param_3 + 4u, (u32)param_4);
    wrf32d((u32)param_3 + 8u, f4);
    wrf32d((u32)param_3 + 0xcu, f3);
    wrf32d((u32)param_3 + 0x10u, f0);
    wrf32d((u32)param_3 + 0x14u, f4);
    wrf32d((u32)param_3 + 0x18u, f3);
    wrf32d((u32)param_3 + 0x1cu, f0);
    wrf32d((u32)param_3 + 0x20u, param_1);
    wrf32d((u32)param_3 + 0x24u, param_2);
    wr32((u32)param_3 + 0x30u, param_8);
    wr32((u32)param_3 + 0x2cu, param_6);
    wr32((u32)param_3 + 0x34u, (u32)param_7);
    wr32((u32)param_3 + 0xe0u, 4u);
    if (param_6 != 0u) {
        r0 = rd32(param_6 + 0xb8u);
        if (r0 == 0u) {
            wr32((u32)param_3 + 0xe0u, 1u);
        } else {
            if (r0 == 2u) {
                a.r[0] = param_6;
                a.r[1] = (u32)param_4;
                a.r[2] = param_5;
                a.r[3] = param_6;
                a.r[4] = (u32)param_7;
                a.r[5] = param_8;
                a.f[0] = param_1;
                a.f[1] = param_2;
                a.f[2] = f3;
                a.f[3] = f4;
                r3 = tc_call(rd32(rd32(param_6) + 0x140u), &a);
                if (r3 != 0u) {
                    wr32((u32)param_3 + 0xe0u, 3u);
                } else {
                    wr32((u32)param_3 + 0xe0u, 2u);
                }
            }
        }
    }
    a.r[0] = (u32)param_3 + 0x68u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_3 + 0x84u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_3 + 0xa8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_3 + 0xc4u;
    (void)tc_call(0x8007ae84u, &a);
    f0 = (f64)rdf32(0x805726f8u);
    wr32((u32)param_3 + 0xa0u, 0u);
    wrf32d((u32)param_3 + 0xa4u, f0);
    a.r[0] = (u32)param_3 + 0x64u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)param_4 == 0u) {
        wr32((u32)param_3 + 0x64u, rd32((u32)param_3 + 0x64u) | 0x80000000u);
    }
    if ((u32)param_7 == 1u) {
        a.f[0] = (f64)rdf32(0x805726fcu);
        a.r[0] = 0x13u;
        a.r[1] = param_5;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32((u32)param_3 + 0x3cu, r3);
    } else {
        if ((u32)param_7 != 3u) {
            if ((u32)param_7 == 2u) {
                a.f[0] = (f64)rdf32(0x805726fcu);
                a.r[0] = 0x19u;
                a.r[1] = param_5;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            } else {
                if ((u32)param_7 == 4u) {
                    a.f[0] = (f64)rdf32(0x805726fcu);
                    a.r[0] = 0x56u;
                    a.r[1] = param_5;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d7768u, &a);
                    r0 = rd32((u32)param_3 + 0x30u);
                    wr32((u32)param_3 + 0x3cu, r3);
                    r0 = r0 | 0x10000u;
                    wr32((u32)param_3 + 0x30u, r0);
                } else {
                    if ((u32)param_7 == 5u) {
                        a.f[0] = (f64)rdf32(0x805726fcu);
                        a.r[0] = 0x26u;
                        a.r[1] = param_5;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        wr32((u32)param_3 + 0x3cu, r3);
                    }
                }
            }
        }
    }
    return;
}
