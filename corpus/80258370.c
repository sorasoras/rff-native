#include "tc_rt.h"

void fn_80258370(f64 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    f31 = param_1;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfecu, 0u);
    a.f[0] = param_1;
    r3 = tc_call(0x802595f4u, &a);
    r31 = (u32)(s8)((((0u - r3) | r3) >> 0x1fu) & 1u);
    if (rdf64(0x80576d68u) == param_1) {
        wr8(param_2, (u8)r31);
        wr16(param_2 + 2u, 0u);
        wr8(param_2 + 4u, 1u);
        wr8(param_2 + 5u, 0u);
    } else {
        a.f[0] = param_1;
        r3 = tc_call(0x8025960cu, &a);
        if ((s32)r3 <= 2) {
            wr8(param_2, (u8)r31);
            wr16(param_2 + 2u, 0u);
            wr8(param_2 + 4u, 1u);
            a.f[0] = param_1;
            r3 = tc_call(0x8025960cu, &a);
            r0 = 0x49u;
            if (r3 == 1u) {
                r0 = 0x4eu;
            }
            wr8(param_2 + 5u, (u8)r0);
        } else {
            if (r31 != 0u) {
                f31 = -param_1;
            }
            a.f[0] = f31;
            a.r[0] = 0x817fdf78u;
            f1 = tc_callf(0x8026291cu, &a);
            wrf64(0x817fdf80u, f1);
            f31 = f1;
            r4 = rd32(0x817fdf84u);
            c0eq = r4 == 0u;
            r3 = rd32(0x817fdf80u) | 0x100000u;
            r4 = 0x20u - ppc_cntlzw((r4 - 1u) & ~r4);
            if (c0eq) {
                r3 = 0x20u - ppc_cntlzw((r3 - 1u) & ~r3);
                r4 = r3 + 0x20u;
            }
            r29 = 0x35u - r4;
            a.r[0] = 0x817fdf88u;
            a.r[1] = rd32(0x817fdf78u) - r29;
            (void)tc_call(0x80258004u, &a);
            a.f[0] = f31;
            a.r[0] = r29;
            f1 = tc_callf(0x802629a4u, &a);
            a.f[0] = f1;
            r3 = tc_call(0x80255ea8u, &a);
            r4 = tc_lastr4();
            a.r[0] = 0x817fdfb4u;
            a.r[1] = r4;
            a.r[2] = r3;
            a.r[3] = r4;
            (void)tc_call(0x80257bb4u, &a);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x817fdf88u;
            (void)tc_call(0x80257c90u, &a);
            wr8(param_2, (u8)r31);
        }
    }
    return;
}
