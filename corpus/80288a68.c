#include "tc_rt.h"

void fn_80288a68(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        a.r[0] = 0x8050fcb8u;
        a.r[1] = param_2;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x8050fcbeu;
        a.r[1] = param_2 + 6u;
        a.r[2] = 0x40u;
        (void)tc_call(0x80004338u, &a);
        r0 = (u32)rd8(0x80571b4au) + 1u;
        wr32(0x8050fdb8u, rd32(param_2 + 0x100u));
        wr8(0x80571b4au, (u8)r0);
        (void)tc_call(0x80289ba4u, &a);
    } else {
        if (!c0lt) {
            c0lt = param_1 < 4;
            if ((u32)param_1 == 4u) {
                f1 = tc_callf(0x80289ba4u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xfc4cu;
                a.r[1] = 0x1cu;
                a.r[2] = 0x80392534u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802966ccu, &a);
                wr8(0x80571b4au, 0u);
                a.r[0] = 0x8050fcb8u;
                a.r[1] = 0u;
                a.r[2] = 0x108u;
                (void)tc_call(0x8000443cu, &a);
                wr8(0x8050f10cu, 4u);
                return;
            }
            if (c0lt) {
                (void)tc_call(0x80289ba4u, &a);
                wr8(0x8050f10cu, 4u);
                return;
            }
        } else {
            c0lt = param_1 < 0;
            if ((u32)param_1 == 0u) {
                f1 = tc_callf(0x80289ba4u, &a);
                r3 = (u32)rd8(0x8050f7e7u);
                wr8(0x80571b49u, rd8(param_2 + 9u));
                if (r3 == 1u) {
                    r0 = 0x1900u;
                } else if (r3 != 0u) {
                    r0 = 0x8000u;
                } else {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r29 = (u32)rd8(0x8050f7e5u);
                    a.r[0] = r3;
                    f1 = tc_callf(0x8022c2d8u, &a);
                    if (r29 >= 3u) {
                        r0 = 0x8000u;
                    } else {
                        r0 = 0x1900u;
                    }
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r0 & 0xffffu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80296904u, &a);
                return;
            }
            if (!c0lt) {
                (void)tc_call(0x80289ba4u, &a);
                return;
            }
        }
        (void)tc_call(0x80289ba4u, &a);
    }
    return;
}
