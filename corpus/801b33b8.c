#include "tc_rt.h"

void fn_801b33b8(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0x80u);
    if (r4 != 0u) {
        r0 = rd32(param_1 + 0x7cu);
        wr32(param_1 + 0x80u, 0u);
        r31 = r0 + r4;
        wr32(param_1 + 0x7cu, r31);
        r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)r31) >> 5);
        r6 = (r5 >> 0x1fu) & 1u;
        r5 = r5 + r6;
        r5 = r5 * 0x64u;
        r27 = r31 - r5;
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r27) >> 2);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xau;
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x368u;
        a.r[2] = r27 - r0;
        a.r[3] = r6;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r27) >> 2);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x3fcu;
        a.r[2] = r0 + ((r0 >> 0x1fu) & 1u);
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r31) >> 5);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x490u;
        a.r[2] = r0 + ((r0 >> 0x1fu) & 1u);
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        wr32(param_1 + 0x2fcu, 1u);
        wr32(param_1 + 0x390u, 1u);
        wr32(param_1 + 0x424u, 1u);
        wr32(param_1 + 0x4b8u, 1u);
    }
    a.r[0] = param_1;
    (void)tc_call(0x801b34c8u, &a);
    return;
}
