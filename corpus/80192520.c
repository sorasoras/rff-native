#include "tc_rt.h"

u32 fn_80192520(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0;
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
        if ((s32)r30 < 37 || (s32)r30 > 84) {
            if ((s32)r30 < 115 || (s32)r30 > 133) {
                if ((s32)r30 < 134 || (s32)r30 > 336) {
                    if ((s32)r30 >= 337 && (s32)r30 <= 352) {
                        r0 = r30 - 0x43u;
                    }
                } else {
                    r0 = r30 - 0x43u;
                }
            } else {
                r0 = r30 - 0x43u;
            }
        } else {
            r0 = r30 - 0x25u;
        }
        r0 = (r0 << 4u) & 0xfffffff0u;
        r5 = (u32)rd16(r0 - 0x7fb5fba8u);
        if ((((s32)r30 >= 37 && (s32)r30 <= 84) || ((s32)r30 >= 115 && (s32)r30 <= 133) || ((s32)r30 >= 134 && (s32)r30 <= 336)) && r5 != 0u) {
            r5 = (r5 + ((r29 - 1u) * 0x1eu)) & 0xffffu;
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r5;
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
