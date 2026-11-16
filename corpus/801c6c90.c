#include "tc_rt.h"

u32 fn_801c6c90(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32((u32)param_1 + 8u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r0 < 0) {
            r3 = 1u;
            return r3;
        }
        a.r[0] = param_2;
        a.r[1] = (u32)param_1 + 0x14u;
        a.r[2] = 0x804dc8b0u;
        f1 = tc_callf(0x801c3248u, &a);
        f2 = (f64)rdf32(0x80575d98u);
        f31 = (f64)(f32)(f1 * (f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0x2cu)));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = (f64)(f32)(f31 + f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f31;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        f0 = (f64)rdf32(0x80575cfcu);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfd0u, f0);
        a.r[0] = param_2;
        a.r[1] = 0x817fdfd0u;
        (void)tc_call(0x801c3208u, &a);
        a.f[0] = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x80570950u) * (f64)rdf32((u32)param_1 + 0x2cu)) * (f64)rdf32(param_2 + 0xd38u)) * (f64)rdf32(param_2 + 0x1cu));
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdfd0u;
        f1 = tc_callf(0x802343c8u, &a);
        wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfd0u));
        wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfd4u));
        wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfd8u));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r0 = rd32((u32)param_1 + 0x18u);
        wr32(0x817fdfc4u, rd32((u32)param_1 + 0x14u));
        wr32(0x817fdfc8u, r0);
        wr32(0x817fdfccu, rd32((u32)param_1 + 0x1cu));
        a.r[0] = 0x817fdfc4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfc4u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfc4u;
        f1 = tc_callf(0x80234428u, &a);
        r4 = tc_lastr4();
        if (!(f1 < (f64)rdf32(0x80575d9cu))) {
            r0 = rd32((u32)param_1 + 0xcu) - 1u;
            wr32((u32)param_1 + 0xcu, r0);
            if ((s32)r0 > 0) {
                r3 = 1u;
                return r3;
            }
        }
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wrf32d((u32)param_1 + 0x20u, (f64)rdf32(r3));
        wrf32d((u32)param_1 + 0x24u, (f64)rdf32(r3 + 4u));
        wrf32d((u32)param_1 + 0x28u, (f64)rdf32(r3 + 8u));
        if (rd32(param_2 + 0x1bcu) == 0x47u) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x1c8u), &a);
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x208u), &a);
        }
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575d3cu);
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r0 = rd32((u32)param_1 + 0x24u);
        wr32(0x817fdfb8u, rd32((u32)param_1 + 0x20u));
        wr32(0x817fdfbcu, r0);
        wr32(0x817fdfc0u, rd32((u32)param_1 + 0x28u));
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802343a4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfb8u);
        a.f[1] = (f64)rdf32(0x817fdfc0u);
        f1 = tc_callf(0x80262c68u, &a);
        f31 = (f64)(f32)f1;
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = (f64)(f32)(f31 - f1);
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x80575d4cu));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f1 = (f64)(f32)(f31 + f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        f1 = (f64)rdf32(0x80575d7cu);
        wrf32d(0x817fdfb8u, (f64)rdf32(param_2 + 0x17cu));
        wrf32d(0x817fdfbcu, (f64)rdf32(param_2 + 0x180u));
        wrf32d(0x817fdfc0u, (f64)rdf32(param_2 + 0x184u));
        a.f[0] = f1;
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfb8u;
        (void)tc_call(0x802343c8u, &a);
        r0 = rd32(param_2 + 0x110u);
        wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfb8u));
        wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfbcu));
        wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfc0u));
        if (r0 != 0u) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
