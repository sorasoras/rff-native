#include "tc_rt.h"

void fn_802648d0(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe8u;
    r3 = tc_call(0x802643acu, &a);
    if (r3 != 0u) {
        r4 = rd32(0x817fdfe8u);
        c0lt = (s32)r4 < 16908288;
        if (r4 != 0x1020000u) {
            if (!c0lt) {
                c0lt = (s32)r4 < 67372036;
                if (r4 == 0x4040404u) {
                    return;
                }
                if (!c0lt) {
                    c0lt = (s32)r4 < 68354048;
                    if (r4 == 0x4130000u) {
                        return;
                    }
                    if (!c0lt) {
                        if (r4 == 0x4220000u) {
                            return;
                        }
                    } else {
                        c0lt = (s32)r4 < 68288512;
                        if (r4 == 0x4120000u) {
                            return;
                        }
                        if (c0lt && r4 == 0x4060000u) {
                            return;
                        }
                    }
                } else {
                    c0lt = (s32)r4 < 67240192;
                    if (r4 == 0x4020100u) {
                        return;
                    }
                    if (!c0lt) {
                        c0lt = (s32)r4 < 67240704;
                        if (r4 == 0x4020300u) {
                            return;
                        }
                        if (c0lt && r4 == 0x4020200u) {
                            return;
                        }
                    } else {
                        c0lt = (s32)r4 < 50397184;
                        if (r4 == 0x3010000u) {
                            return;
                        }
                        if (c0lt && r4 == 0x2020000u) {
                            return;
                        }
                    }
                }
            } else {
                c0lt = (s32)r4 < 4;
                if (r4 == 4u) {
                    return;
                }
                if (!c0lt) {
                    c0lt = (s32)r4 < 32;
                    if (r4 == 0x20u) {
                        return;
                    }
                    if (!c0lt) {
                        if (r4 == 0x1010000u) {
                            return;
                        }
                    } else {
                        c0lt = (s32)r4 < 16;
                        if (r4 == 0x10u) {
                            return;
                        }
                        if (c0lt && r4 == 8u) {
                            return;
                        }
                    }
                } else {
                    c0lt = (s32)r4 < -2147483632;
                    if (r4 == 0x80000010u) {
                        return;
                    }
                    if (!c0lt) {
                        c0lt = (s32)r4 < -1;
                        if (r4 == 0xffffffffu) {
                            return;
                        }
                        if (c0lt && r4 == 0x80000020u) {
                            return;
                        }
                    } else {
                        c0lt = (s32)r4 < -2147483640;
                        if (r4 == 0x80000008u) {
                            return;
                        }
                        if (c0lt && r4 == 0x80000004u) {
                            return;
                        }
                    }
                }
            }
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x80264758u, &a);
            if (r3 != 0u) {
                wr32(0x805719fcu, param_1);
                wr32(0x805719f8u, param_2);
                wr32(0x805719f4u, 0xa5ff005au);
                wr32(0x805719f0u, 0xa5ff005au);
            }
        }
    }
    return;
}
