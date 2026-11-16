#include "tc_rt.h"

u32 fn_80192664(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r5 = rd32(rd32(0x80571398u) + 0x38u);
    r30 = (u32)rd16(r5 + 0x20cu);
    r29 = (u32)rd8(r5 + 0x20fu);
    a.r[0] = 0x8049f1b0u;
    a.r[1] = r30;
    r3 = tc_call(0x8015f2b0u, &a);
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x180000u;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        if ((s32)r30 >= 37 && (s32)r30 <= 84) {
            r0 = r30 - 0x25u;
        } else {
            if ((s32)r30 >= 115 && (s32)r30 <= 133) {
                r0 = r30 - 0x43u;
            } else {
                if ((s32)r30 >= 134 && (s32)r30 <= 336) {
                    r0 = r30 - 0x43u;
                } else {
                    if ((s32)r30 >= 337 && (s32)r30 <= 352) {
                        r0 = r30 - 0x43u;
                    }
                }
            }
        }
        r0 = (r0 << 4u) & 0xfffffff0u;
        r4 = (u32)rd16(r0 - 0x7fb5fba6u);
        if ((s32)r30 >= 337 && (s32)r30 <= 352) {
            r4 = (r4 + ((r29 - 1u) * 0x3e8u)) & 0xffffu;
        }
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r4 + 0x63u)) >> 5);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r0 + ((r0 >> 0x1fu) & 1u);
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
