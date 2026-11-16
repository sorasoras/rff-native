#include "tc_rt.h"

void fn_80313790(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 == 1u || r0 == 2u) {
        r4 = rd32((u32)param_1 + 0x24u);
        if ((r4 & 0x10000u) != 0u || (r4 & 0x8000u) != 0u) {
            f0 = (f64)rdf32(0x8057787cu);
            wr8((u32)param_1 + 0x120u, 1u);
            wrf32d((u32)param_1 + 0xb0u, f0);
            wrf32d((u32)param_1 + 0xacu, f0);
            wrf32d((u32)param_1 + 0xa8u, f0);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x80313b9cu, &a);
            a.r[0] = rd32(rd32((u32)param_1 + 0xbcu) + 0x20u) + 0xc02cu;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = 0x817fdf88u;
            (void)tc_call(0x802337a0u, &a);
            r29 = rd32(0x817fdf8cu);
            r30 = rd32(0x817fdf90u);
            r12 = rd32(0x817fdf94u);
            r11 = rd32(0x817fdf98u);
            r10 = rd32(0x817fdf9cu);
            r9 = rd32(0x817fdfa0u);
            r8 = rd32(0x817fdfa4u);
            r7 = rd32(0x817fdfa8u);
            r6 = rd32(0x817fdfacu);
            r5 = rd32(0x817fdfb0u);
            r0 = rd32(0x817fdfb4u);
            wr32(0x817fdf58u, rd32(0x817fdf88u));
            wr32(0x817fdf5cu, r29);
            wr32(0x817fdf60u, r30);
            wr32(0x817fdf64u, r12);
            wr32(0x817fdf68u, r11);
            wr32(0x817fdf6cu, r10);
            wr32(0x817fdf70u, r9);
            wr32(0x817fdf74u, r8);
            wr32(0x817fdf78u, r7);
            wr32(0x817fdf7cu, r6);
            wr32(0x817fdf80u, r5);
            wr32(0x817fdf84u, r0);
            a.r[0] = 0x817fdf58u;
            a.r[1] = 0u;
            f1 = tc_callf(0x80320f2cu, &a);
            f0 = (f64)rdf32(0x8057787cu);
            wrf32d(0x817fdf58u, f1);
            wrf32d(0x817fdf78u, f0);
            wrf32d(0x817fdf68u, f0);
            a.r[0] = 0x817fdf58u;
            a.r[1] = 1u;
            f1 = tc_callf(0x80320f2cu, &a);
            f0 = (f64)rdf32(0x8057787cu);
            wrf32d(0x817fdf6cu, f1);
            wrf32d(0x817fdf7cu, f0);
            wrf32d(0x817fdf5cu, f0);
            a.r[0] = 0x817fdf58u;
            a.r[1] = 2u;
            f1 = tc_callf(0x80320f2cu, &a);
            f2 = (f64)rdf32(0x8057787cu);
            wrf32d(0x817fdf80u, f1);
            wrf32d(0x817fdf70u, f2);
            wrf32d(0x817fdf60u, f2);
            if ((rd32((u32)param_1 + 0x24u) & 0x8000u) != 0u) {
                a.f[0] = (f64)rdf32(0x805778a0u);
                a.f[1] = f2;
                a.f[2] = f2;
                a.r[0] = 0x817fdf28u;
                (void)tc_call(0x80320c10u, &a);
                a.r[0] = 0x817fdf58u;
                a.r[1] = 0x817fdf28u;
                a.r[2] = 0x817fdf58u;
                (void)tc_call(0x802337a0u, &a);
            }
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            (void)tc_call(0x8023386cu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf58u;
            a.r[2] = 0x817fdf88u;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            a.r[2] = (u32)param_1 + 0xa8u;
            (void)tc_call(0x80320e84u, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = (u32)param_1 + 0x9cu;
            a.r[2] = 0x817fdf88u;
            (void)tc_call(0x80320dfcu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = (u32)param_1 + 0xa8u;
            (void)tc_call(0x80320350u, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80313cecu, &a);
        }
    }
    return;
}
