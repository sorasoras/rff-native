#include "tc_rt.h"

void fn_8009ccac(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = (u32)rd8(param_2);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r7 = rd32(r0 - 0x7fcae748u);
        sw_ = r7;
        switch (sw_) {
        case 0x8009cdccu:
            break;
        case 0x8009ccf0u:
            wr8(param_2, rd8(param_3));
            wr32(param_2 + 4u, rd32(param_3 + 4u));
            break;
        case 0x8009cd04u:
            a.r[0] = rd32((u32)param_1 + 0xcu);
            a.r[1] = 0x817fdff0u;
            a.r[2] = 0x817fdfecu;
            a.r[3] = 0x817fdfe8u;
            a.r[4] = rd32(param_2 + 4u);
            r3 = tc_call(0x8009bfd4u, &a);
            if ((u32)(s8)r3 == 0u) break;
            a.r[0] = rd32((u32)param_1 + 0xcu);
            a.r[1] = rd32(0x817fdff0u);
            a.r[2] = rd32(0x817fdfecu);
            a.r[3] = rd32(param_3 + 4u);
            (void)tc_call(0x8009c38cu, &a);
            break;
        case 0x8009cd3cu:
            wr32((u32)param_4 + (((0u - (rd32(param_2 + 4u) + 1u)) << 2u) & 0xfffffffcu), rd32(param_3 + 4u));
            break;
        case 0x8009cd58u:
            wr32((u32)param_1 + 0x28u, rd32(param_3 + 4u));
            break;
        case 0x8009cd64u:
            wr32((u32)param_1 + 0x2cu, rd32(param_3 + 4u));
            break;
        case 0x8009cd70u:
            wr32((u32)param_1 + 0x30u, rd32(param_3 + 4u));
            break;
        case 0x8009cd7cu:
            wr32((u32)param_1 + 0x34u, rd32(param_3 + 4u));
            break;
        case 0x8009cd88u:
            wr32((u32)param_1 + 0x38u, rd32(param_3 + 4u));
            break;
        case 0x8009cd94u:
            wr32((u32)param_1 + 0x3cu, rd32(param_3 + 4u));
            break;
        case 0x8009cda0u:
            wr32((u32)param_1 + 0x40u, rd32(param_3 + 4u));
            break;
        case 0x8009cdacu:
            wr32((u32)param_1 + 0x44u, rd32(param_3 + 4u));
            break;
        case 0x8009cdb8u:
            wr32((u32)param_1 + 0x48u, rd32(param_3 + 4u));
            break;
        case 0x8009cdc4u:
            wr32((u32)param_1 + 0x4cu, rd32(param_3 + 4u));
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = r7;
            a.r[5] = param_2;
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
