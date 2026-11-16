#include "tc_rt.h"

u32 fn_802d194c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802d09d8u, &a);
    wr32(param_1, 0x80399df0u);
    a.r[0] = param_1 + 0xd4u;
    a.r[1] = 0x802cd8c0u;
    a.r[2] = 0x802cb69cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0xe4u;
    (void)tc_call(0x802cb7b0u, &a);
    r0 = (u32)rd8((u32)param_2 + 0x5eu);
    r31 = 8u;
    if (r0 <= 8u) {
        r31 = r0;
    }
    r4 = r31 & 0xffu;
    if (r4 != 0u) {
        a.r[0] = param_1 + 0xe4u;
        a.r[1] = r4;
        (void)tc_call(0x802cb814u, &a);
    }
    r5 = r31 & 0xffu;
    r4 = rd32((u32)param_2 + 0x50u);
    r3 = rd32((u32)param_2 + 0x54u);
    r0 = rd32((u32)param_2 + 0x58u);
    wr32(param_1 + 0xd4u, rd32((u32)param_2 + 0x4cu));
    wr32(param_1 + 0xd8u, r4);
    wr32(param_1 + 0xdcu, r3);
    wr32(param_1 + 0xe0u, r0);
    if (r5 != 0u && (u32)rd8(param_1 + 0xe4u) != 0u) {
        a.r[0] = param_1 + 0xe4u;
        a.r[1] = (u32)param_2 + 0x60u;
        a.r[2] = r5;
        (void)tc_call(0x802cb994u, &a);
    }
    a.r[0] = rd32(0x805474e0u);
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (!c0eq) {
        r5 = rd32((u32)param_3 + 8u);
        r4 = r5 + rd32(r5 + (((u32)rd16((u32)param_2 + 0x5cu) << 2u) & 0xfffffffcu) + 0xcu);
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = (u32)param_3;
            r3 = tc_call(0x802cd8ccu, &a);
        }
        wr32(param_1 + 0x28u, r3);
    }
    return param_1;
}
