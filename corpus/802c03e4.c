#include "tc_rt.h"

static u32 px_rec(u32 sp_, s32 param_1)
{
    u32 r1 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x10u, sp_);
    r1 = sp_ - 0x10u;
    wr32(r1 + 0x14u, 0x817ff000u);
    wr32(r1 + 0xcu, 0u);
    if (((u32)rd8((u32)param_1 + 0xcfu) & 1u) == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0xcu);
        if (r3 == 0u) {
            r3 = 1u;
        } else {
            if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
                r3 = 0u;
            } else {
                r3 = rd32(r3 + 0xcu);
                if (r3 == 0u) {
                    r3 = 1u;
                } else {
                    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
                        r3 = 0u;
                    } else {
                        r3 = rd32(r3 + 0xcu);
                        if (r3 == 0u) {
                            r3 = 1u;
                        } else {
                            if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
                                r3 = 0u;
                            } else {
                                r31 = rd32(r3 + 0xcu);
                                if (r31 == 0u) {
                                    r3 = 1u;
                                } else {
                                    a.r[0] = r31;
                                    r3 = tc_call(0x802c04e4u, &a);
                                    if (r3 == 0u) {
                                        r3 = 0u;
                                    } else {
                                        a.r[0] = r31;
                                        r3 = tc_call(0x802c04f0u, &a);
                                        if (r3 == 0u) {
                                            r3 = 1u;
                                        } else {
                                            a.r[0] = r31;
                                            r3 = tc_call(0x802c04f0u, &a);
                                            r3 = px_rec(r1, r3);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return r3;
}

u32 fn_802c03e4(s32 param_1)
{
    return px_rec(0x817fe000u, param_1);
}
