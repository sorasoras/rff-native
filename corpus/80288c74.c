#include "tc_rt.h"

void fn_80288c74(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r0 = (u32)rd8(param_2);
    c0lt = (s32)r0 < 10;
    if (r0 == 0xau) {
        (void)tc_call(0x80289ba4u, &a);
        wr8(0x8050f809u, rd8(param_2 + 1u));
    } else if (!c0lt) {
        if (r0 == 0x10u) {
            f1 = tc_callf(0x80289ba4u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80570dc8u;
            a.r[1] = 0x10fau;
            a.r[2] = 0x803921fcu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802285e4u, &a);
        }
    } else {
        c0lt = (s32)r0 < 8;
        if (r0 == 8u) {
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            if ((u32)rd8(0x8050f10cu) != 0u || (u32)rd8(0x8050f10du) != 0u || (u32)rd8(0x8050f10fu) != 4u || (u32)rd8(0x8050f110u) != 5u) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r0 = 1u;
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r0 = 0u;
            }
            if (r0 == 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = rd32(0x8050f100u);
                a.r[0] = r3;
                f1 = tc_callf(0x8022c2d8u, &a);
                if (r30 == 0u) {
                    (void)tc_call(0x80289ba4u, &a);
                    a.r[0] = 0u;
                    a.r[1] = 3u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    (void)tc_call(0x80286e68u, &a);
                } else {
                    a.r[0] = 0u;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r30, &a);
                }
            }
        } else if (!c0lt) {
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = rd32(0x8050f108u);
            r30 = r3;
            r3 = tc_call(0x8022c2b0u, &a);
            if ((u32)rd8(0x8050f10cu) != 0u || (u32)rd8(0x8050f10du) != 0u || (u32)rd8(0x8050f10fu) != 4u || (u32)rd8(0x8050f110u) != 5u) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r4 = 1u;
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r4 = 0u;
            }
            r3 = r30;
            r30 = 0u - ((((0u - r4) | r4) >> 0x1fu) & 1u);
            a.r[0] = r3;
            f1 = tc_callf(0x8022c2d8u, &a);
            r4 = tc_lastr4();
            if (r29 == 0u) {
                (void)tc_call(0x80289ba4u, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                r31 = (u32)(s8)rd8(0x8050f808u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                if (r31 == 3u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    if ((u32)rd8(0x8050f10cu) != 0u || (u32)rd8(0x8050f10du) != 0u || (u32)rd8(0x8050f10fu) != 4u || (u32)rd8(0x8050f110u) != 5u) {
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        r0 = 1u;
                    } else {
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r29 = r3;
                        wr8(0x8050f10du, 1u);
                        a.r[0] = 0x8050f810u;
                        (void)tc_call(0x8022671cu, &a);
                        r3 = tc_call(0x8023029cu, &a);
                        r4 = tc_lastr4();
                        a.r[0] = 0x8050f810u;
                        a.r[1] = r4;
                        a.r[2] = r3;
                        a.r[3] = r4;
                        a.r[4] = 0u;
                        a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x14u;
                        a.r[6] = 0x80285d60u;
                        (void)tc_call(0x802269ecu, &a);
                        a.r[0] = r29;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                }
            } else {
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(r29, &a);
            }
        }
    }
    return;
}
