#include "tc_rt.h"

void fn_8009db3c(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r10 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
    r0 = (u32)rd8(param_4 + r10);
    r9 = param_4 + r10;
    if (r0 <= 0x1au) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r8 = rd32(r0 - 0x7fcae638u);
        sw_ = r8;
        switch (sw_) {
        case 0x8009db80u:
            break;
        case 0x8009db94u:
            wr32(param_2, 0u);
            r5 = rd32((u32)param_1 + 0x14u);
            r4 = r5 + (((rd32((u32)param_1 + 0x54u) + (u32)param_5) << 2u) & 0xfffffffcu);
            r5 = r5 + ((rd32((u32)param_1 + 0x1cu) << 2u) & 0xfffffffcu);
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = param_3;
            a.r[4] = r9;
            (void)tc_call(0x8009d04cu, &a);
            return;
        case 0x8009dc00u:
            r5 = param_4 & 0xffffu;
            wr32(param_2, 2u);
            r4 = rd32((u32)param_1 + 0xcu);
            a.r[0] = r10 + ((r5 + 1u) & 0xffffu);
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(r4 + 4u), &a);
            wr32(param_3, r3);
            return;
        case 0x8009dc30u:
            r5 = param_4 & 0xffffu;
            wr32(param_2, 3u);
            r4 = rd32((u32)param_1 + 0xcu);
            a.r[0] = r10 + ((r5 + 1u) & 0xffffu);
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(r4 + 4u), &a);
            wr32(param_3, r3);
            return;
        case 0x8009dbccu:
            r5 = param_4 & 0xffffu;
            wr32(param_2, 7u);
            r4 = rd32((u32)param_1 + 0xcu);
            a.r[0] = r10 + ((r5 + 1u) & 0xffffu);
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(r4), &a);
            wr32(param_3, r3 & 0xffffu);
            return;
        case 0x8009dc60u:
            wr32(param_2, 4u);
            wr32(param_3, 0u);
            return;
        case 0x8009dc74u:
            wr32(param_2, 5u);
            wr32(param_3, 0u);
            return;
        case 0x8009dc88u:
            wr32(param_2, 6u);
            wr32(param_3, 0u);
            return;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
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
    wr32(param_2, 0xffffffffu);
    wr32(param_3, 0u);
    return;
}
