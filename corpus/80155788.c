#include "tc_rt.h"

u32 fn_80155788(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_2 != 0u) {
        c0lt = param_1 < 4;
        if ((u32)param_1 == 4u) {
            r3 = tc_call(0x8008242cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x8015545cu, &a);
            if (r3 != 0u) {
                wr16(0x817fdfecu, 0x2e8u);
                wr8(0x817fdfeeu, 1u);
                wr8(0x817fdfefu, 1u);
                if ((u32)rd8((u32)param_2 + 1u) != 2u) {
                    wr16(0x817fdfecu, (u16)((u32)rd8((u32)param_2 + 2u) + 0x25u));
                } else {
                    r3 = (u32)rd8((u32)param_2 + 2u);
                    if (r3 > 0xfu) {
                        wr16(0x817fdfecu, (u16)(r3 + 0x42u));
                    } else {
                        wr16(0x817fdfecu, (u16)(r3 + 0x37u));
                    }
                }
                wr8(0x817fdfeeu, 1u);
                wr8(0x817fdfefu, (u8)((u32)rd8((u32)param_2 + 5u) & 0x7fu));
                a.r[0] = 0x800815b4u;
                a.r[1] = 0x78u;
                a.r[2] = 0x817fdfecu;
                (void)tc_call(0x8017a090u, &a);
                a.r[0] = (u32)param_2;
                (void)tc_call(0x8008d340u, &a);
                r3 = 1u;
                return r3;
            }
        } else if (!c0lt) {
            c0lt = param_1 < 6;
            if ((u32)param_1 == 6u) {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x801555acu, &a);
                if (r3 != 0u) {
                    r0 = (u32)param_3 + (u32)rd16(0x80492836u);
                    if ((s32)r0 > 9999) {
                        r0 = 0x270fu;
                    }
                    wr16(0x80492836u, (u16)r0);
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x8008d340u, &a);
                    r3 = 1u;
                    return r3;
                }
            } else if (c0lt) {
                r3 = tc_call(0x8008242cu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x8015554cu, &a);
                if (r3 != 0u) {
                    wr16(0x817fdfe8u, 0x2e8u);
                    wr8(0x817fdfeau, 1u);
                    wr8(0x817fdfebu, (u8)param_3);
                    r3 = (u32)rd8((u32)param_2 + 2u);
                    if (r3 != 0x10u) {
                        if (r3 != 0x11u) {
                            wr8(0x817fdfebu, 1u);
                            wr16(0x817fdfe8u, (u16)((u32)rd8((u32)param_2 + 2u) + 0x42u));
                        } else {
                            wr16(0x817fdfe8u, 0x80u);
                        }
                    } else {
                        wr16(0x817fdfe8u, 0x7fu);
                    }
                    a.r[0] = 0x800815b4u;
                    a.r[1] = 0x78u;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x8017a090u, &a);
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x8008d340u, &a);
                    r3 = 1u;
                    return r3;
                }
            }
        } else {
            c0lt = param_1 < 2;
            if ((u32)param_1 == 2u) {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x801554e8u, &a);
                if (r3 != 0u) {
                    r0 = (u32)rd8((u32)param_2 + 6u) - (u32)param_3;
                    if ((s32)r0 <= 0) {
                        r3 = (u32)rd16(0x8049908eu);
                        if ((u32)rd8((u32)param_2 + 2u) != 4u) {
                            r3 = r3 + 1u;
                        } else {
                            r3 = r3 + 0xau;
                        }
                        if ((s32)r3 >= 9999) {
                            r0 = 0x270fu;
                        } else {
                            r0 = r3;
                        }
                        r0 = r0 & 0xffffu;
                        if (r0 >= 0x270fu) {
                            r0 = 0x270fu;
                        } else {
                            if ((s32)r3 >= 9999) {
                                r3 = 0x270fu;
                            }
                            r0 = r3 & 0xffffu;
                        }
                        wr16(0x8049908eu, (u16)r0);
                        a.r[0] = (u32)param_2;
                        (void)tc_call(0x8008d340u, &a);
                        r3 = 1u;
                        return r3;
                    }
                    wr8((u32)param_2 + 6u, (u8)r0);
                    r3 = 0u;
                    return r3;
                }
            } else if (!c0lt) {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x80155528u, &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x8008d300u, &a);
                    r3 = 1u;
                    return r3;
                }
            } else if (param_1 >= 1) {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x801554b0u, &a);
                if (r3 != 0u) {
                    r0 = (u32)rd8((u32)param_2 + 6u) - (u32)param_3;
                    if ((s32)r0 <= 0) {
                        a.r[0] = (u32)param_2;
                        (void)tc_call(0x8008d340u, &a);
                        r3 = 1u;
                        return r3;
                    }
                    wr8((u32)param_2 + 6u, (u8)r0);
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}
