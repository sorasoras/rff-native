#include "tc_rt.h"

void fn_801d2a98(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    r7 = param_4 & 0xffu;
    r8 = (u32)((s32)(param_4 & 0xffffu) >> 8);
    r6 = (u32)((s32)param_4 >> 16);
    r4 = rd32((u32)param_1 + 0x34cu);
    if ((r4 == 6u || r4 == 8u) && (u32)param_3 != 5u) {
        r7 = 0u;
    }
    if ((u32)param_3 <= 0xau) {
        r4 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fc8c080u);
        sw_ = r4;
        switch (sw_) {
        case 0x801d2bd4u:
            break;
        case 0x801d2afcu:
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            a.r[2] = r7;
            a.r[3] = r6;
            r3 = tc_call(0x801d204cu, &a);
            if (r3 != 0u) break;
            wr32((u32)param_1 + 0x350u, 2u);
            break;
        case 0x801d2b20u:
            a.r[0] = (u32)param_1;
            a.r[1] = 4u;
            a.r[2] = r7;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            break;
        case 0x801d2b9cu:
            a.r[0] = (u32)param_1;
            a.r[1] = 5u;
            a.r[2] = r7;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            break;
        case 0x801d2b34u:
            wr32((u32)param_1 + 0x37cu, r8);
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = r7;
            a.r[3] = r6;
            r3 = tc_call(0x801d204cu, &a);
            if (r3 != 0u) break;
            wr32((u32)param_1 + 0x350u, 1u);
            break;
        case 0x801d2b5cu:
            wr32((u32)param_1 + 0x384u, 1u);
            break;
        case 0x801d2b68u:
            f0 = (f64)rdf32(0x80575e98u);
            wr32((u32)param_1 + 0x334u, 1u);
            wrf32d((u32)param_1 + 0x330u, f0);
            break;
        case 0x801d2b7cu:
            wr32((u32)param_1 + 0x334u, 2u);
            break;
        case 0x801d2b88u:
            a.r[0] = (u32)param_1;
            a.r[1] = 9u;
            a.r[2] = r7;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            break;
        case 0x801d2bb0u:
            a.r[0] = (u32)param_1;
            a.r[1] = 8u;
            a.r[2] = r7;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            break;
        case 0x801d2bc4u:
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            a.r[2] = r7;
            a.r[3] = r6;
            (void)tc_call(0x801d204cu, &a);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = (u32)param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    return;
}
