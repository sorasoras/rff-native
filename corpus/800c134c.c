#include "tc_rt.h"

u32 fn_800c134c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x11u;
    if (rd32(param_1 + 0x110u) != 0u || (u32)param_2 != 0u) {
        if ((u32)rd16(param_1 + 0xa4cu) == 0x2e8u) {
            r4 = (u32)rd16(param_1 + 0xa50u);
            if (r4 == 0x2e8u) {
                r31 = 0u;
                a.f[0] = (f64)rdf32(0x80572ea8u);
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                (void)tc_call(0x800bf1d4u, &a);
                a.r[0] = param_1;
                f1 = tc_callf(0x8006c418u, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x4cu), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x4cu), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x4cu), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x10u), &a);
                a.r[0] = param_1 + 0x54cu;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1 + 0x54cu) + 0x10u), &a);
                wr32(param_1 + 0xa5cu, 1u);
            } else {
                r31 = 0x12u;
                wr32(param_1 + 0xa58u, 0x12u);
                r0 = 0u;
                if (((s32)r4 >= 526 && (s32)r4 <= 547) || ((s32)r4 >= 570 && (s32)r4 <= 591) || ((s32)r4 >= 592 && (s32)r4 <= 613) || ((s32)r4 >= 635 && (s32)r4 <= 639) || ((s32)r4 >= 640 && (s32)r4 <= 644)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((s32)r4 >= 504 && (s32)r4 <= 646) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x800bff48u, &a);
                    } else {
                        a.r[0] = param_1;
                        (void)tc_call(0x800bff88u, &a);
                    }
                } else {
                    a.r[0] = param_1;
                    (void)tc_call(0x800c0008u, &a);
                }
                if (rd32(param_1 + 0xa60u) == 0u || rd32(param_1 + 0xa5cu) == 0u) {
                    wr32(param_1 + 0xa5cu, 0u);
                }
            }
        } else {
            r31 = 0x12u;
            wr32(param_1 + 0xa58u, 0x12u);
            a.r[0] = param_1;
            (void)tc_call(0x800bff48u, &a);
            if (rd32(param_1 + 0xa60u) == 0u || rd32(param_1 + 0xa5cu) == 0u) {
                wr32(param_1 + 0xa60u, 0u);
            }
        }
    }
    return r31;
}
