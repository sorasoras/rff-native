#include "tc_rt.h"

u32 fn_800c3c88(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        r3 = 0u;
    } else {
        if (rd32((u32)param_1 + 0xab4u) != 0xbu) {
            r3 = 0u;
        } else {
            r30 = rd32((u32)param_1 + 0xa48u);
            if (rd32(0x805711ecu) == 0u && ((ppc_cntlzw(rd32(0x80571188u) & 1u) >> 5u) & 0x7ffffffu) != 0u) {
                r0 = rd32((u32)param_1 + 0x290u);
                if (r0 == 0u || r0 == 1u) {
                    if (r30 != 0u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = rd32(r30 + 0x74u);
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x180000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) {
                            r3 = rd32(r30 + 0x74u);
                            if ((s32)r3 >= 37 && (s32)r3 <= 84) {
                                r31 = r3 - 0x25u;
                            } else {
                                if ((s32)r3 >= 115 && (s32)r3 <= 133) {
                                    r31 = r3 - 0x43u;
                                } else {
                                    if ((s32)r3 >= 134 && (s32)r3 <= 336) {
                                        r31 = r3 - 0x43u;
                                    } else {
                                        if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                            r31 = r3 - 0x43u;
                                        }
                                    }
                                }
                            }
                            if ((u32)rd8(((r31 << 4u) & 0xfffffff0u) - 0x7fb5fba2u) == 1u) {
                                r3 = 1u;
                                return r3;
                            }
                        }
                    }
                }
            }
            r3 = 0u;
        }
    }
    return r3;
}
