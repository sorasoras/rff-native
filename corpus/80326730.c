#include "tc_rt.h"

void fn_80326730(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0eq = 0, c0lt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    do {
        if ((u32)param_5 == 0u) {
            c0eq = rd32(param_1 + 0xb0u) == (u32)rd8(param_2 + 0x97u);
            if (c0eq && c0eq) {
                r31 = 0u;
                break;
            }
        }
        r6 = (u32)rd8(param_3 + 3u);
        wr32(param_1 + 0xb0u, (u32)rd8(param_2 + 0x97u));
        wr32(param_1 + 0xb4u, (u32)rd8(param_2 + 0x97u));
        a.r[0] = (u32)rd8(param_3 + 2u);
        a.r[1] = (u32)rd8(param_2 + 0x97u);
        a.r[2] = (u32)rd8(param_3 + 4u);
        a.r[3] = r6;
        a.r[4] = (u32)rd8(param_2 + 0x98u);
        (void)tc_call(0x8025379cu, &a);
        r31 = 1u;
    } while (0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_5;
    r3 = tc_call(0x80326c0cu, &a);
    c0eq = r31 == 0u;
    r31 = 0u;
    if (!c0eq || r3 != 0u) {
        r31 = 1u;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = (u32)param_5;
    r3 = tc_call(0x8032739cu, &a);
    r4 = 0u;
    if (r31 != 0u && r3 == 0u) {
        r4 = 1u;
    }
    if (((u32)rd16(param_3) & 8u) == 0u && ((u32)rd8(rd32(rd32(rd32(rd32(param_2 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0xc064u) != 0u && r4 != 0u)) {
        a.r[0] = 9u;
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x8024f6bcu, &a);
        a.r[0] = 0xau;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x8024f6bcu, &a);
        a.r[0] = 0xdu;
        a.r[1] = 0x817fdfbcu;
        (void)tc_call(0x8024f6bcu, &a);
        a.r[0] = 0u;
        a.r[1] = 9u;
        a.r[2] = 0x817fdfd8u;
        a.r[3] = 0x817fdfdcu;
        a.r[4] = 0x817fdfb8u;
        (void)tc_call(0x8024fc88u, &a);
        a.r[0] = 0u;
        a.r[1] = 0xau;
        a.r[2] = 0x817fdfccu;
        a.r[3] = 0x817fdfd0u;
        a.r[4] = 0x817fdfb8u;
        (void)tc_call(0x8024fc88u, &a);
        a.r[0] = 0u;
        a.r[1] = 0xdu;
        a.r[2] = 0x817fdfc0u;
        a.r[3] = 0x817fdfc4u;
        a.r[4] = 0x817fdfb8u;
        (void)tc_call(0x8024fc88u, &a);
        a.r[0] = 0x98u;
        a.r[1] = 0u;
        a.r[2] = 8u;
        (void)tc_call(0x80250b74u, &a);
        r5 = rd32(0x817fdfd4u);
        r6 = rd32(0x817fdfd8u);
        r7 = rd32(0x817fdfdcu);
        r8 = rd32(0x817fdfc8u);
        r9 = rd32(0x817fdfccu);
        r10 = rd32(0x817fdfd0u);
        r11 = rd32(0x817fdfbcu);
        r12 = rd32(0x817fdfc0u);
        r31 = rd32(0x817fdfc4u);
        ctr = 8u;
        do {
            if (r5 != 0u) {
                c0lt = (s32)r5 < 2;
                if (r5 == 2u) {
                    wr8(0xcc008000u, 0u);
                } else if (!c0lt) {
                    if ((s32)r5 < 4) {
                        wr16(0xcc008000u, 0u);
                    }
                } else if ((s32)r5 >= 1) {
                    c0lt = (s32)r6 < 1;
                    if (r6 == 1u) {
                        c0lt = (s32)r7 < 2;
                        if (r7 == 2u) {
                            wr16(0xcc008000u, 0u);
                            wr16(0xcc008000u, 0u);
                            wr16(0xcc008000u, 0u);
                        } else if (!c0lt) {
                            c0lt = (s32)r7 < 4;
                            if (r7 == 4u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            } else if (c0lt) {
                                wr16(0xcc008000u, 0u);
                                wr16(0xcc008000u, 0u);
                                wr16(0xcc008000u, 0u);
                            }
                        } else {
                            c0lt = (s32)r7 < 0;
                            if (r7 == 0u) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            } else if (!c0lt) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            }
                        }
                    } else if (c0lt && (s32)r6 >= 0) {
                        c0lt = (s32)r7 < 2;
                        if (r7 == 2u) {
                            wr16(0xcc008000u, 0u);
                            wr16(0xcc008000u, 0u);
                        } else if (!c0lt) {
                            c0lt = (s32)r7 < 4;
                            if (r7 == 4u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            } else if (c0lt) {
                                wr16(0xcc008000u, 0u);
                                wr16(0xcc008000u, 0u);
                            }
                        } else {
                            c0lt = (s32)r7 < 0;
                            if (r7 == 0u) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            } else if (!c0lt) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            }
                        }
                    }
                }
            }
            if (r8 != 0u) {
                c0lt = (s32)r8 < 2;
                if (r8 == 2u) {
                    wr8(0xcc008000u, 0u);
                } else if (!c0lt) {
                    if ((s32)r8 < 4) {
                        wr16(0xcc008000u, 0u);
                    }
                } else if ((s32)r8 >= 1 && r9 == 0u) {
                    c0lt = (s32)r10 < 3;
                    if (r10 == 3u) {
                        wr16(0xcc008000u, 0u);
                        wr16(0xcc008000u, 0u);
                        wr16(0xcc008000u, 0u);
                    } else if (!c0lt) {
                        if ((s32)r10 < 5) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                        }
                    } else if (r10 == 1u) {
                        wr8(0xcc008000u, 0u);
                        wr8(0xcc008000u, 0u);
                        wr8(0xcc008000u, 0u);
                    }
                }
            }
            if (r11 != 0u) {
                c0lt = (s32)r11 < 2;
                if (r11 == 2u) {
                    wr8(0xcc008000u, 0u);
                } else if (!c0lt) {
                    if ((s32)r11 < 4) {
                        wr16(0xcc008000u, 0u);
                    }
                } else if ((s32)r11 >= 1) {
                    c0lt = (s32)r12 < 1;
                    if (r12 == 1u) {
                        c0lt = (s32)r31 < 2;
                        if (r31 == 2u) {
                            wr16(0xcc008000u, 0u);
                            wr16(0xcc008000u, 0u);
                        } else if (!c0lt) {
                            c0lt = (s32)r31 < 4;
                            if (r31 == 4u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            } else if (c0lt) {
                                wr16(0xcc008000u, 0u);
                                wr16(0xcc008000u, 0u);
                            }
                        } else {
                            c0lt = (s32)r31 < 0;
                            if (r31 == 0u) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            } else if (!c0lt) {
                                wr8(0xcc008000u, 0u);
                                wr8(0xcc008000u, 0u);
                            }
                        }
                    } else if (c0lt && (s32)r12 >= 0) {
                        c0lt = (s32)r31 < 2;
                        if (r31 == 2u) {
                            wr16(0xcc008000u, 0u);
                        } else if (!c0lt) {
                            c0lt = (s32)r31 < 4;
                            if (r31 == 4u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577be4u));
                            } else if (c0lt) {
                                wr16(0xcc008000u, 0u);
                            }
                        } else {
                            c0lt = (s32)r31 < 0;
                            if (r31 == 0u) {
                                wr8(0xcc008000u, 0u);
                            } else if (!c0lt) {
                                wr8(0xcc008000u, 0u);
                            }
                        }
                    }
                }
            }
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return;
}
