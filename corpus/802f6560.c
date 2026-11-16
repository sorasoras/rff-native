#include "tc_rt.h"

void fn_802f6560(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x24u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if ((u32)rd8(param_1 + 0x7au) != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x18u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = rd32(param_1 + 0x84u);
            if (r3 != 0u) {
                wr32(param_1 + 0x84u, r3 - 1u);
            } else {
                r0 = rd32(param_1 + 0x7cu);
                if (r0 == 0u || r0 == 3u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
                    return;
                }
            }
        }
    }
    r30 = 0u;
    if ((u32)rd8(param_1 + 0x79u) == 0u) {
        if ((u32)rd8(param_1 + 0x78u) == 0u) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            return;
        }
        r30 = 1u;
    }
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r31) + 0x1cu), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        r3 = rd32(param_1 + 0x88u);
        if (r3 < 0xffffffffu) {
            wr32(param_1 + 0x88u, r3 + 1u);
        }
    }
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r31) + 0x18u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = 0u;
    if (r3 != 0u) {
        r0 = rd32(param_1 + 0x7cu);
        if (r0 == 1u || r0 == 3u) {
            r3 = rd32(param_1 + 0x74u);
            if ((s32)r3 < (s32)rd32(param_1 + 0x70u)) {
                wr32(param_1 + 0x74u, r3 + 1u);
            }
        } else if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x30u), &a);
            r4 = tc_lastr4();
            r5 = 0u;
        }
        r3 = rd32(param_1 + 0x20u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = rd32(param_1 + 0x28u);
            a.r[2] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = tc_lastr4();
            r5 = 0u;
        }
        if (rd32(param_1 + 0x1cu) != 0u) {
            f0 = (f64)rdf32(0x805775acu);
            r5 = 0x817fdf9cu;
            f1 = (f64)rdf32(0x805775a8u);
            wrf32d(0x817fdf70u, f0);
            wrf32d(0x817fdf68u, f1);
            wrf32d(0x817fdf6cu, f1);
            wrf32d(0x817fdf74u, f0);
            wrf32d(0x817fdf78u, f0);
            wrf32d(0x817fdf7cu, f0);
            wr32(0x817fdf80u, 0u);
            wrf32d(0x817fdf84u, f1);
            wrf32d(0x817fdf88u, f1);
            wrf32d(0x817fdf8cu, f0);
            wrf32d(0x817fdf90u, f0);
            wrf32d(0x817fdf94u, f0);
            wrf32d(0x817fdf98u, f0);
            r0 = (u32)((s32)ppc_mulhw(715827883, 95) >> 2);
            r9 = r0 + ((r0 >> 0x1fu) & 1u);
            r10 = r9 + 1u;
            if ((s32)r10 > 8) {
                r3 = 0u;
                r7 = r9 & 0x80000000u;
                r6 = 1u;
                if (r7 == 0u && r7 != (r10 & 0x80000000u)) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r3 = 1u;
                }
            }
            f1 = (f64)rdf32(0x805775a8u);
            f0 = (f64)rdf32(0x805775acu);
            ctr = ppc_divwu(0x5fu, 0x18u);
            do {
                wrf32d(r5, f1);
                wrf32d(r5 + 4u, f1);
                wrf32d(r5 + 8u, f0);
                wrf32d(r5 + 0xcu, f0);
                wrf32d(r5 + 0x10u, f0);
                wrf32d(r5 + 0x14u, f0);
                r5 = r5 + 0x18u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            r3 = rd32(param_1 + 0x1cu);
            a.r[0] = r3;
            a.r[1] = rd32(param_1 + 0x28u);
            a.r[2] = rd32(param_1 + 0x90u);
            a.r[3] = (u32)rd8(param_1 + 0x8du);
            a.r[4] = 0x817fdf68u;
            a.r[5] = 0x5fu;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = r31;
            r3 = 0x817fdf68u;
            r5 = 0u;
            wrf32d(param_1 + 0x30u, (f64)rdf32(0x817fdf68u));
            wrf32d(param_1 + 0x34u, (f64)rdf32(0x817fdf6cu));
            wrf32d(param_1 + 0x38u, (f64)rdf32(0x817fdf70u));
            wrf32d(param_1 + 0x3cu, (f64)rdf32(0x817fdf74u));
            wrf32d(param_1 + 0x40u, (f64)rdf32(0x817fdf78u));
            wrf32d(param_1 + 0x44u, (f64)rdf32(0x817fdf7cu));
            wr32(param_1 + 0x48u, rd32(0x817fdf80u));
            while ((s32)r5 < (s32)rd8(param_1 + 0x8du)) {
                r5 = r5 + 1u;
                wrf32d(r4 + 0x6cu, (f64)rdf32(r3 + 0x1cu));
                wrf32d(r4 + 0x70u, (f64)rdf32(r3 + 0x20u));
                wrf32d(r4 + 0x74u, (f64)rdf32(r3 + 0x24u));
                wrf32d(r4 + 0x78u, (f64)rdf32(r3 + 0x28u));
                wrf32d(r4 + 0x7cu, (f64)rdf32(r3 + 0x2cu));
                f0 = (f64)rdf32(r3 + 0x30u);
                r3 = r3 + 0x18u;
                wrf32d(r4 + 0x80u, f0);
                r4 = r4 + 0x18u;
            }
        }
        r3 = rd32(param_1 + 0x14u);
        if (r3 != 0u) {
            wrf32d(param_1 + 0x4cu, (f64)rdf32(r3 + 0x48u));
            wrf32d(param_1 + 0x50u, (f64)rdf32(r3 + 0x4cu));
            wrf32d(param_1 + 0x54u, (f64)rdf32(r3 + 0x50u));
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
        r4 = tc_lastr4();
        if ((u32)rd8(param_1 + 0x7bu) == 0u || (s32)rd32(param_1 + 0x64u) < (s32)rd32(param_1 + 0x60u)) {
            if (r30 != 0u) {
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r31) + 0xcu), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
                    return;
                }
                wr8(param_1 + 0x79u, 1u);
                wr8(param_1 + 0x78u, 0u);
            }
            r0 = rd32(param_1 + 0x7cu);
            if (r0 != 1u) {
                if (r0 == 3u && (s32)rd32(param_1 + 0x74u) >= (s32)rd32(param_1 + 0x70u)) {
                    wr32(param_1 + 0x7cu, 0u);
                }
            } else if ((s32)rd32(param_1 + 0x74u) >= (s32)rd32(param_1 + 0x70u)) {
                a.r[0] = r31;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r31) + 0x14u), &a);
                wr32(param_1 + 0x7cu, 2u);
            }
            if ((u32)rd8(param_1 + 0x80u) != 0u) {
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 0x14u), &a);
                wr8(param_1 + 0x80u, 0u);
            }
        } else {
            wr8(param_1 + 0x7bu, 0u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
    }
    return;
}
