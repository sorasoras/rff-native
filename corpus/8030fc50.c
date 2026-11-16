#include "tc_rt.h"

void fn_8030fc50(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8((u32)param_1 + 0xe8u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        if ((u32)rd8((u32)param_1 + 0xe9u) == 0u) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        } else {
            if ((u32)rd8((u32)param_1 + 0xeau) == 0u) {
                r3 = (u32)rd8((u32)param_1 + 0xebu);
                if (r3 != 0u && rd32((u32)param_1 + 0x130u) == 0u) {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d56cu, &a);
                    if ((u32)rd8((u32)param_1 + 0xe9u) != 0u) {
                        r30 = (u32)param_1;
                        if ((u32)param_1 != 0u) {
                            r30 = (u32)param_1 + 0xdcu;
                        }
                        r3 = tc_call(0x80306860u, &a);
                        a.r[0] = r3;
                        a.r[1] = r30;
                        (void)tc_call(0x80306c94u, &a);
                        wr8((u32)param_1 + 0xe9u, 0u);
                    }
                    if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
                        r30 = (u32)param_1;
                        if ((u32)param_1 != 0u) {
                            r30 = (u32)param_1 + 0xd0u;
                        }
                        r3 = tc_call(0x802f85a0u, &a);
                        a.r[0] = r3;
                        a.r[1] = r30;
                        (void)tc_call(0x802f86b4u, &a);
                        wr8((u32)param_1 + 0xe8u, 0u);
                    }
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d56cu, &a);
                    r4 = rd32((u32)param_1 + 0x130u);
                    r3 = 0u;
                    if (r4 != 0u && (u32)rd8(r4 + 0x36u) != 0u) {
                        r3 = 1u;
                    }
                    if (r3 != 0u) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x803100b4u, &a);
                        a.r[0] = rd32((u32)param_1 + 0x130u);
                        (void)tc_call(0x802f8000u, &a);
                    }
                    r3 = rd32((u32)param_1 + 0x130u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        (void)tc_call(0x802f8588u, &a);
                    }
                    wr32((u32)param_1 + 0x130u, 0u);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                    return;
                }
                if (r3 == 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32((u32)param_1 + 0xfcu);
                    a.r[2] = rd32((u32)param_1 + 0x100u);
                    r3 = tc_call(0x8030fefcu, &a);
                    if (r3 == 0u) {
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d56cu, &a);
                        if ((u32)rd8((u32)param_1 + 0xe9u) != 0u) {
                            r30 = (u32)param_1;
                            if ((u32)param_1 != 0u) {
                                r30 = (u32)param_1 + 0xdcu;
                            }
                            r3 = tc_call(0x80306860u, &a);
                            a.r[0] = r3;
                            a.r[1] = r30;
                            (void)tc_call(0x80306c94u, &a);
                            wr8((u32)param_1 + 0xe9u, 0u);
                        }
                        if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
                            r30 = (u32)param_1;
                            if ((u32)param_1 != 0u) {
                                r30 = (u32)param_1 + 0xd0u;
                            }
                            r3 = tc_call(0x802f85a0u, &a);
                            a.r[0] = r3;
                            a.r[1] = r30;
                            (void)tc_call(0x802f86b4u, &a);
                            wr8((u32)param_1 + 0xe8u, 0u);
                        }
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d56cu, &a);
                        r4 = rd32((u32)param_1 + 0x130u);
                        r3 = 0u;
                        if (r4 != 0u && (u32)rd8(r4 + 0x36u) != 0u) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) {
                            a.r[0] = (u32)param_1;
                            (void)tc_call(0x803100b4u, &a);
                            a.r[0] = rd32((u32)param_1 + 0x130u);
                            (void)tc_call(0x802f8000u, &a);
                        }
                        r3 = rd32((u32)param_1 + 0x130u);
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            (void)tc_call(0x802f8588u, &a);
                        }
                        wr32((u32)param_1 + 0x130u, 0u);
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                }
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x803100b4u, &a);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
    }
    return;
}
