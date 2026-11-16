#include "tc_rt.h"

void fn_800c0808(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    if (r0 <= 0x1fu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fcaab58u);
        sw_ = r4;
        switch (sw_) {
        case 0x800c0840u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c22dcu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c084cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c2314u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0858u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1858u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0864u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1948u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0870u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1994u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c087cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1254u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0888u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c18d0u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0894u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c153cu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0918u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c17a8u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c097cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0f04u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08f4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1604u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0958u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c12d4u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08dcu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c16b8u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0900u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c15a4u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c090cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1544u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08e8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c166cu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c09b4u:
            break;
        case 0x800c0924u:
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            r3 = tc_call(0x800c134cu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0934u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c12e8u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c094cu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c2914u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0970u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0f50u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08a0u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1b58u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08acu:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c21e4u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0964u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0fdcu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0994u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0ac0u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0988u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0b1cu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c09a0u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c0a3cu, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08b8u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1704u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08c4u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1820u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c08d0u:
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800c1838u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c09acu:
            r3 = tc_call(0x800c09c8u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        case 0x800c0940u:
            r3 = tc_call(0x800c1850u, &a);
            wr32((u32)param_1 + 0x290u, r3);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
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
