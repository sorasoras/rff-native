#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_8005f108(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if (rd32(0x805706d0u) != 7u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        wr32(0x80486da8u, 0x7fu);
        r0 = rd32((u32)param_1 + 0x10u);
        if (r0 == 0x12u || r0 == 0x10u) {
            r31 = 0u;
            wr32((u32)param_1 + 0xcu, 0xcu);
        } else if (r0 != 0xdu) {
            if (r0 == 0u || r0 == 4u) {
                f1 = (f64)rdf32(0x80572434u);
                wr32(rd32((u32)param_1 + 0x14u) + 0xbcu, 1u);
                a.f[0] = f1;
                a.r[0] = 2u;
                a.r[1] = 6u;
                (void)tc_call(0x800523b0u, &a);
                wr32(0x805710d8u, 0u);
                wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0x10u));
                wr32((u32)param_1 + 0x10u, 0x12u);
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                a.r[1] = 0u;
                (void)tc_call(0x800564f8u, &a);
                r28 = 0u;
                do {
                    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                    (void)tc_call(0x80056604u, &a);
                    r28 = r28 + 1u;
                } while (r28 < 0x64u);
                c0eq = (rd32(0x80492c58u) & 0x80u) == 0u;
                wrf32d((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e5ecu, (f64)rdf32(0x80572508u));
                if (!c0eq) {
                    a.r[0] = 0u;
                    (void)tc_call(0x80077690u, &a);
                }
            }
        } else {
            a.f[0] = (f64)rdf32(0x80572434u);
            a.r[0] = 2u;
            a.r[1] = 6u;
            (void)tc_call(0x800523b0u, &a);
            wr32(0x805710d8u, 0u);
            wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0x10u));
            wr32((u32)param_1 + 0x10u, 0x12u);
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            a.r[1] = 6u;
            f1 = tc_callf(0x800564f8u, &a);
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r29 = 0u;
            r4 = rd32(r3 + 4u);
            r5 = rd32(r3);
            r3 = rd32(r3 + 8u);
            f0 = (f64)px_w2f(r4);
            r4 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            f4 = (f64)px_w2f(r5);
            f5 = (f64)(f32)(f0 + (f64)(f32)((f64)rdf32(0x80572500u) + (f64)rdf32(rd32(0x804863d8u) + 0xb4u)));
            f0 = (f64)rdf32(0x80572504u);
            wrf32d(r4 + 0x134u, f4);
            f2 = (f64)(f32)(f5 + f0);
            wrf32d(r4 + 0x138u, f5);
            wrf32d(r4 + 0x13cu, (f64)px_w2f(r3));
            f0 = (f64)rdf32(0x805724d8u);
            wrf32d(r4 + 0x140u, f4);
            f1 = (f64)(f32)((f64)px_w2f(r3) - f0);
            f0 = (f64)rdf32(0x805724d0u);
            wrf32d(r4 + 0x144u, f2);
            wrf32d(r4 + 0x148u, f1);
            wrf32d(r4 + 0x14cu, f0);
            do {
                a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                (void)tc_call(0x80056604u, &a);
                r29 = r29 + 1u;
            } while (r29 < 0x14u);
            c0eq = (rd32(0x80492c58u) & 0x80u) == 0u;
            wr32(0x80486da8u, rd32(0x80486da8u) & 0xffffffc7u);
            if (!c0eq) {
                a.r[0] = 1u;
                (void)tc_call(0x80077690u, &a);
            }
        }
        r3 = r31;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x180u;
        (void)tc_call(0x8005df40u, &a);
        r3 = 1u;
    }
    return r3;
}
