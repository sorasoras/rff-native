#include "tc_rt.h"

void fn_8005d27c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 <= 0x11u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fcb0200u);
        sw_ = r4;
        switch (sw_) {
        case 0x8005d2b4u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d2c4u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d2d4u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d2e4u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d2f4u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d304u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d314u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d324u:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            if (rd32(0x805706d0u) != 7u) break;
            r5 = (u32)rd8(0x805724b5u);
            r4 = (u32)rd8(0x805724b6u);
            r0 = (u32)rd8(0x805724b7u);
            wr8(0x817fdfecu, rd8(0x805724b4u));
            f1 = (f64)rdf32(0x80572430u);
            wr8(0x817fdfedu, (u8)r5);
            wr8(0x817fdfeeu, (u8)r4);
            wr8(0x817fdfefu, (u8)r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfecu;
            (void)tc_call(0x80051e64u, &a);
            break;
        case 0x8005d36cu:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005aa0cu, &a);
            break;
        case 0x8005d3acu:
            a.r[0] = rd32((u32)param_1 + 0x14u);
            a.r[1] = 0x4057u;
            (void)tc_call(0x8005aa0cu, &a);
            wr32((u32)param_1 + 0xcu, 0x12u);
            break;
        case 0x8005d37cu:
            r5 = (u32)rd8(0x805724b9u);
            r4 = (u32)rd8(0x805724bau);
            r0 = (u32)rd8(0x805724bbu);
            wr8(0x817fdfe8u, rd8(0x805724b8u));
            f1 = (f64)rdf32(0x80572430u);
            wr8(0x817fdfe9u, (u8)r5);
            wr8(0x817fdfeau, (u8)r4);
            wr8(0x817fdfebu, (u8)r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfe8u;
            (void)tc_call(0x80051e9cu, &a);
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
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
    if (rd32((u32)param_1 + 0x24u) != 0u) {
        wr32((u32)param_1 + 0x24u, 0u);
        (void)tc_call(0x80059c28u, &a);
        a.f[0] = (f64)rdf32(0x805724a0u);
        a.f[1] = (f64)rdf32(0x805724bcu);
        (void)tc_call(0x80059c9cu, &a);
    }
    return;
}
