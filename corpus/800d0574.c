#include "tc_rt.h"

u32 fn_800d0574(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((rd32(0x80571188u) & 0x40u) == 0u) {
        r3 = rd32(param_1 + 0x20u);
        if (r3 == 0u || ((u32)rd16(r3 + 0x140u) & 0x20u) == 0u) {
            f4 = (f64)rdf32(0x80573088u);
            f2 = (f64)rdf32(0x804890ccu);
            f3 = (f64)rdf32(0x804890c8u);
            wrf32d(0x817fdfbcu, f4);
            f0 = (f64)rdf32(0x8057308cu);
            f1 = (f64)rdf32(0x804890d0u);
            wrf32d(0x817fdfa4u, f4);
            r3 = rd32(0x804863d8u);
            wrf32d(0x817fdfc4u, f4);
            wrf32d(0x817fdf98u, f4);
            wrf32d(0x817fdf94u, f4);
            wrf32d(0x817fdf90u, f4);
            wrf32d(0x817fdfd0u, f4);
            wrf32d(0x817fdfccu, f4);
            wrf32d(0x817fdfc8u, f4);
            wr32(0x817fdf88u, 0u);
            wrf32d(0x817fdf9cu, f3);
            wrf32d(0x817fdfa0u, f2);
            wrf32d(0x817fdfa4u, f1);
            wrf32d(0x817fdfbcu, f3);
            wrf32d(0x817fdfc0u, f2);
            wrf32d(0x817fdfc4u, f1);
            wr32(0x817fdfecu, 0u);
            wr32(0x817fdfe4u, 0u);
            wr32(0x817fdfe8u, 0u);
            wrf32d(0x817fdf8cu, f0);
            wrf32d(0x817fdfe0u, f4);
            wrf32d(0x817fdfdcu, f4);
            wrf32d(0x817fdfd8u, f4);
            wrf32d(0x817fdfd4u, f4);
            wrf32d(0x817fdfb4u, f4);
            wrf32d(0x817fdfb0u, f4);
            wrf32d(0x817fdfacu, f4);
            wrf32d(0x817fdfa8u, f4);
            a.r[0] = r3;
            a.r[1] = 0x80490000u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdf7cu, r4);
            wr32(0x817fdf80u, r0);
            wr32(0x817fdf84u, rd32(r3 + 8u));
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
            f1 = tc_lastf();
            wrf32d(0x817fdf80u, (f64)rdf32(r3 + 4u));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
            r0 = rd32(r3 + 4u);
            r7 = rd32(0x804863d8u);
            wr32(0x817fdf70u, rd32(r3));
            f1 = (f64)rdf32(0x80573090u);
            wr32(0x817fdf74u, r0);
            wr32(0x817fdf78u, rd32(r3 + 8u));
            r7 = rd32(r7 + 0xbcu);
            a.f[0] = f1;
            a.r[0] = 0x8046d8c8u;
            a.r[1] = 0x817fdf88u;
            a.r[2] = 0x817fdf7cu;
            a.r[3] = 0x817fdf70u;
            a.r[4] = r7;
            a.r[5] = 8u;
            r3 = tc_call(0x8008c458u, &a);
            f1 = tc_lastf();
            if (r3 == 0u || rd32(0x817fdf88u) != 1u) {
                if (((u32)rd16(rd32(0x804863d8u) + 0x140u) & 2u) == 0u) {
                    wrf32d(param_1 + 0x3cu, (f64)rdf32(param_1 + 0x64u));
                } else {
                    r3 = rd32(param_1 + 0x20u);
                    if (r3 == 0u || ((u32)rd16(r3 + 0x140u) & 2u) == 0u) {
                        wrf32d(param_1 + 0x3cu, (f64)rdf32(param_1 + 0x64u));
                    } else {
                        f1 = (f64)rdf32(0x80573094u);
                        wrf32d(param_1 + 0x3cu, (f64)(f32)(f1 * (f64)rdf32(param_1 + 0x64u)));
                    }
                }
                f0 = (f64)rdf32(0x80573088u);
                wrf32d(0x817fdf6cu, f0);
                wrf32d(0x817fdf68u, f0);
                wrf32d(0x817fdf64u, f0);
                wrf32d(0x817fdf60u, f0);
                wrf32d(0x817fdf5cu, f0);
                wrf32d(0x817fdf58u, f0);
                a.r[0] = param_1;
                a.r[1] = 0x817fdf64u;
                a.r[2] = 0x817fdf58u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x1cu), &a);
                a.r[0] = param_1;
                a.r[1] = 0x817fdf58u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
                a.r[0] = param_1 + 0x24u;
                a.r[1] = 0x817fdf64u;
                a.r[2] = 0x817fdf58u;
                r3 = tc_call(0x800cfe68u, &a);
                r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
