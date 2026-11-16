#include "tc_rt.h"

void fn_8019ad7c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r6 = 0x80499060u;
    r4 = rd32(0x80499094u);
    r28 = 0u;
    r5 = 1u;
    if ((r4 & 8u) != 0u) {
        r5 = 2u;
    }
    if ((r4 & 4u) != 0u) {
        r5 = (((r5 << 2u) & 0xfffffffcu) - r5) & 0xffu;
    }
    r0 = rd32(0x8057117cu);
    c0lt = (s32)r0 < 7;
    if (r0 == 7u) {
        r31 = (r5 * 0x384u) & 0xffffu;
        if (rd32(param_1 + 0x40u) != 0u) {
            r0 = ((u32)(s8)rd8(param_1 + 0x24u) + 9u) * 0xd2u;
        } else {
            r0 = 0x12cu;
        }
        r27 = r0 & 0xffffu;
        a.r[0] = 9u;
        a.r[1] = r27;
        r3 = tc_call(0x80081c68u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r28 = r3;
    } else if (!c0lt) {
        if ((s32)r0 < 9) {
            r31 = (r5 * 0x258u) & 0xffffu;
            if (rd32(param_1 + 0x40u) != 0u) {
                r0 = ((u32)(s8)rd8(param_1 + 0x24u) + 9u) * 0x64u;
            } else {
                r0 = 0x12cu;
            }
            r27 = r0 & 0xffffu;
            a.r[0] = 7u;
            a.r[1] = r27;
            r3 = tc_call(0x80081c68u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r28 = r3;
        }
    } else if ((s32)r0 >= 6) {
        r31 = (r5 * 0x384u) & 0xffffu;
        if (rd32(param_1 + 0x40u) != 0u) {
            r0 = ((u32)(s8)rd8(param_1 + 0x24u) + 9u) * 0x8cu;
        } else {
            r0 = 0x12cu;
        }
        r27 = r0 & 0xffffu;
        a.r[0] = 8u;
        a.r[1] = r27;
        r3 = tc_call(0x80081c68u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r28 = r3;
    } else if ((s32)r0 >= 0) {
        r31 = (r5 * 0x258u) & 0xffffu;
        if (rd32(param_1 + 0x40u) != 0u) {
            r0 = ((u32)(s8)rd8(param_1 + 0x24u) + 9u) * 0x64u;
        } else {
            r0 = 0x258u;
        }
        r27 = r0 & 0xffffu;
        a.r[0] = 6u;
        a.r[1] = r27;
        r3 = tc_call(0x80081c68u, &a);
        r28 = r3;
        a.r[0] = 0x44u;
        r3 = tc_call(0x8014d9a4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        if (r3 == 0u) {
            r0 = (u32)rd16(0x8049b18au) + 1u;
            if (r0 > 0xffu) {
                r0 = 0xffu;
            }
            wr16(0x8049b18au, (u16)r0);
            a.r[0] = 0x44u;
            a.r[1] = 1u;
            f1 = tc_callf(0x8014d9dcu, &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
        }
    }
    if (r28 != 0u) {
        f0 = (f64)rdf32(0x80575678u);
        r3 = rd32(0x804863d8u);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r7 = rd32(0x804863d8u);
        wrf32d(0x817fdfd8u, (f64)rdf32(r3));
        f0 = (f64)rdf32(0x805756a4u);
        f3 = (f64)rdf32(r3 + 4u);
        f1 = (f64)rdf32(0x805756b0u);
        wrf32d(0x817fdfdcu, f3);
        wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
        f0 = (f64)(f32)(f0 + (f64)rdf32(r7 + 0xb4u));
        f0 = (f64)(f32)(f3 + f0);
        wrf32d(0x817fdfdcu, f0);
        a.f[0] = f1;
        a.r[0] = 0x2eu;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    if (param_2 != 0u && param_3 != 0u) {
        wr16(param_2, (u16)r31);
        wr16(param_3, (u16)r27);
    }
    return;
}
