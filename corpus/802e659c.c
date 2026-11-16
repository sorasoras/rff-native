#include "tc_rt.h"

u32 fn_802e659c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802e42a8u, &a);
    wr32(param_1, 0x8039cd50u);
    a.r[0] = param_1 + 0xd8u;
    a.r[1] = 0x802e6590u;
    a.r[2] = 0x800fe97cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0xe8u;
    (void)tc_call(0x802ef3c0u, &a);
    r0 = (u32)rd8((u32)param_2 + 0x5eu);
    r30 = 8u;
    if (r0 <= 8u) {
        r30 = r0;
    }
    r4 = r30 & 0xffu;
    if (r4 != 0u) {
        a.r[0] = param_1 + 0xe8u;
        a.r[1] = r4;
        (void)tc_call(0x802ef424u, &a);
    }
    r5 = r30 & 0xffu;
    r4 = rd32((u32)param_2 + 0x50u);
    r3 = rd32((u32)param_2 + 0x54u);
    r0 = rd32((u32)param_2 + 0x58u);
    wr32(param_1 + 0xd8u, rd32((u32)param_2 + 0x4cu));
    wr32(param_1 + 0xdcu, r4);
    wr32(param_1 + 0xe0u, r3);
    wr32(param_1 + 0xe4u, r0);
    if (r5 != 0u && (u32)rd8(param_1 + 0xe8u) != 0u) {
        a.r[0] = param_1 + 0xe8u;
        a.r[1] = (u32)param_2 + 0x60u;
        a.r[2] = r5;
        (void)tc_call(0x802ef658u, &a);
    }
    r7 = rd32(param_3 + 8u);
    r5 = rd32(param_3 + 4u);
    r6 = rd32(r7 + (((u32)rd16((u32)param_2 + 0x5cu) << 2u) & 0xfffffffcu) + 0xcu);
    r0 = rd32(param_3 + 0xcu);
    wr32(0x817fdfd8u, rd32(param_3));
    r30 = r7 + r6;
    r3 = rd32(0x80571d40u);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r7);
    wr32(0x817fdfe4u, r0);
    a.r[0] = r3;
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (c0eq) {
            wr32(param_1 + 0x28u, r3);
            return param_1;
        }
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = 0x817fdfd8u;
        r3 = tc_call(0x802ead38u, &a);
    } else {
        r3 = 0u;
    }
    wr32(param_1 + 0x28u, r3);
    return param_1;
}
