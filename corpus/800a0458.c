#include "tc_rt.h"

void fn_800a0458(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 c0lt = 0, r0 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r7 = rd32(param_3);
    wr32(0x817fdfe8u, r7);
    r0 = (u32)rd8(r7) & 0xf0u;
    c0lt = (s32)r0 < 128;
    if (r0 == 0x80u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x800a0ea0u, &a);
    } else if (!c0lt) {
        c0lt = (s32)r0 < 192;
        if (r0 == 0xc0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            (void)tc_call(0x800a131cu, &a);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 224;
            if (r0 == 0xe0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a1588u, &a);
            } else if (!c0lt) {
                if (r0 == 0xf0u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x800a16c8u, &a);
                }
            } else if (r0 == 0xd0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a1460u, &a);
            }
        } else {
            c0lt = (s32)r0 < 160;
            if (r0 == 0xa0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a10d0u, &a);
            } else if (!c0lt) {
                if (r0 == 0xb0u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x800a11f0u, &a);
                }
            } else if (r0 == 0x90u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a0fb0u, &a);
            }
        }
    } else {
        c0lt = (s32)r0 < 64;
        if (r0 == 0x40u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            (void)tc_call(0x800a0a84u, &a);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 96;
            if (r0 == 0x60u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a0c8cu, &a);
            } else if (!c0lt) {
                if (r0 == 0x70u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x800a0d90u, &a);
                }
            } else if (r0 == 0x50u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a0b88u, &a);
            }
        } else {
            c0lt = (s32)r0 < 32;
            if (r0 == 0x20u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x800a08e8u, &a);
            } else if (!c0lt) {
                if (r0 == 0x30u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    (void)tc_call(0x800a0980u, &a);
                }
            } else {
                c0lt = (s32)r0 < 16;
                if (r0 == 0x10u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    a.r[3] = (u32)(s8)param_4;
                    (void)tc_call(0x800a06a0u, &a);
                } else if (c0lt && r0 == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfe8u;
                    a.r[3] = (u32)(s8)param_4;
                    (void)tc_call(0x800a061cu, &a);
                }
            }
        }
    }
    wr32(param_3, rd32(0x817fdfe8u));
    return;
}
