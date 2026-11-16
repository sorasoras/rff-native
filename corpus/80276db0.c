#include "tc_rt.h"

u32 fn_80276db0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r3 = tc_call(0x80286d1cu, &a);
    if ((u32)param_1 != 0u) {
        r29 = 1u;
    } else if (r3 != 3u) {
        if (r3 != 5u) {
            if (r3 == 4u || (r3 - 1u) <= 1u) {
                r29 = 0u;
            } else if (r3 == 0u) {
                r29 = 1u;
            }
        } else {
            (void)tc_call(0x80287094u, &a);
            r29 = 0u;
        }
    } else {
        r3 = tc_call(0x8028846cu, &a);
        if (r3 == 0u) {
            c0lt = param_2 < 4;
            if ((u32)param_2 != 4u) {
                if (!c0lt) {
                    c0lt = param_2 < 6;
                    if ((u32)param_2 == 6u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        if (rd32(0x80571ae0u) != 0u) {
                            if ((u32)rd8(0x80571aedu) == 0u) {
                                wr8(0x80571aedu, 1u);
                                wr32(0x80570db4u, 1u);
                                (void)tc_call(0x80284b24u, &a);
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r3;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                        } else {
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        r29 = 0u;
                        return r29;
                    }
                    if (!c0lt) {
                        return r29;
                    }
                    if (rd32(0x805714fcu) == 0u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        if (rd32(0x80571ae0u) != 0u) {
                            if ((u32)rd8(0x80571aedu) == 0u) {
                                wr8(0x80571aedu, 1u);
                                wr32(0x80570db4u, 1u);
                                (void)tc_call(0x80284b24u, &a);
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r3;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                        } else {
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                    } else {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        if ((u32)rd8(0x80571aedu) == 0u) {
                            wr8(0x80571aedu, 1u);
                            a.r[0] = 0u;
                            a.r[1] = 0u;
                            (void)tc_call(0x802872d0u, &a);
                            r30 = 0xau;
                            r29 = 0x8050fb0du;
                            do {
                                a.r[0] = r29;
                                a.r[1] = 0u;
                                a.r[2] = 0x46u;
                                (void)tc_call(0x8000443cu, &a);
                                r30 = r30 + 1u;
                                r29 = r29 + 0x46u;
                            } while ((s32)r30 < 14);
                            a.r[0] = 0x8050b920u;
                            (void)tc_call(0x80226a70u, &a);
                            a.r[0] = 0u;
                            (void)tc_call(0x80287218u, &a);
                            a.r[0] = 0u;
                            (void)tc_call(0x80286afcu, &a);
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                    }
                    r29 = 0u;
                    return r29;
                }
                c0lt = param_2 < 1;
                if ((u32)param_2 != 1u) {
                    if (c0lt) {
                        if (param_2 < 0) {
                            return r29;
                        }
                        (void)tc_call(0x80284b24u, &a);
                        a.r[0] = 0x80276d50u;
                        a.r[1] = 0x80276d80u;
                        (void)tc_call(0x80286ab0u, &a);
                    }
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = r3;
                    if ((u32)rd8(0x80571aedu) == 0u) {
                        wr8(0x80571aedu, 1u);
                        a.r[0] = 0u;
                        a.r[1] = 0u;
                        (void)tc_call(0x802872d0u, &a);
                        r31 = 0xau;
                        r29 = 0x8050fb0du;
                        do {
                            a.r[0] = r29;
                            a.r[1] = 0u;
                            a.r[2] = 0x46u;
                            (void)tc_call(0x8000443cu, &a);
                            r31 = r31 + 1u;
                            r29 = r29 + 0x46u;
                        } while ((s32)r31 < 14);
                        a.r[0] = 0x8050b920u;
                        (void)tc_call(0x80226a70u, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x80287218u, &a);
                        a.r[0] = 0u;
                        (void)tc_call(0x80286afcu, &a);
                        a.r[0] = r30;
                        (void)tc_call(0x8022c2d8u, &a);
                    } else {
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                    r29 = 0u;
                    return r29;
                }
            }
            r3 = tc_call(0x8022c2b0u, &a);
            r30 = r3;
            if (rd32(0x80571ae0u) != 0u) {
                if ((u32)rd8(0x80571aedu) == 0u) {
                    wr8(0x80571aedu, 1u);
                    wr32(0x80570db4u, 1u);
                    (void)tc_call(0x80284b24u, &a);
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                } else {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                }
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
            r29 = 0u;
        } else {
            (void)tc_call(0x80286ff4u, &a);
            r29 = 0u;
        }
    }
    return r29;
}
