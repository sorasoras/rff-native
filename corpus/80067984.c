#include "tc_rt.h"

void fn_80067984(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    (void)tc_call(0x800816b0u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801a0bacu, &a);
    r0 = rd32(param_1 + 0xa64u);
    if ((s32)r0 > 0) {
        r0 = r0 - 1u;
        wr32(param_1 + 0xa64u, r0);
        if (r0 == 0u) {
            wr32(param_1 + 0xa5cu, 1u);
        }
    }
    a.r[0] = param_1;
    r3 = tc_call(0x800c4830u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        wr32(param_1 + 0xa80u, 0u);
    } else {
        r3 = rd32(param_1 + 0xa80u);
        if (r3 != 0u) {
            if ((u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                f1 = tc_lastf();
                r30 = r3;
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfe4u, rd32(r3));
                wr32(0x817fdfe8u, r0);
                wr32(0x817fdfecu, rd32(r3 + 8u));
                a.r[0] = 0x817fdfe4u;
                a.r[1] = r30;
                a.r[2] = 0x817fdfe4u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdfe4u;
                f1 = tc_callf(0x80234428u, &a);
                r4 = tc_lastr4();
                if (f1 > (f64)rdf32(0x805725f0u)) {
                    wr32(param_1 + 0xa80u, 0u);
                }
            } else {
                wr32(param_1 + 0xa80u, 0u);
            }
        }
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        if ((u32)((s32)((rd32(param_1 + 0x9cu) << 1u) & 0xc0000000u) >> 31) == 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8006d898u, &a);
            r4 = rd32(param_1 + 0x290u);
            wr32(param_1 + 0x294u, r4);
            if ((u32)rd16(0x8049908au) == 0u && r4 != 0x1du && r4 != 0x1fu) {
                f0 = (f64)rdf32(0x805725f4u);
                f1 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
                if ((f1 > f0) || (f1 == f0)) {
                    if (r4 == 0x19u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x80065210u, &a);
                        wr32(param_1 + 0x88cu, 1u);
                    } else {
                        if (r4 == 0x18u || r4 == 0x1au) {
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                        if (r0 != 0u) {
                            a.r[0] = param_1;
                            (void)tc_call(0x80065210u, &a);
                            wr32(param_1 + 0x88cu, 1u);
                        }
                    }
                    a.r[0] = param_1;
                    (void)tc_call(0x8006c388u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x8006c5ecu, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x8014660cu, &a);
                    wr32(param_1 + 0xa08u, 0x21u);
                    wr32(param_1 + 0xa0cu, 0x21u);
                    wr32(param_1 + 0xa10u, 0x21u);
                    wr32(param_1 + 0xa14u, 0u);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8019bf38u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x80186c4cu, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x800c30d4u, &a);
                    r3 = tc_call(0x80040b64u, &a);
                    f1 = tc_lastf();
                    r29 = r3 & 1u;
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r29 + 0x424u;
                    a.r[2] = r3;
                    (void)tc_call(0x8010a794u, &a);
                    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff6ffeu);
                }
            }
            a.r[0] = param_1;
            (void)tc_call(0x800694f8u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x8006907cu, &a);
            f2 = (f64)rdf32(0x805725d8u);
            f0 = (f64)(f32)((f64)rdf32(param_1 + 0x948u) - (f64)rdf32(0x805725e0u));
            if (!(f2 > f0)) {
                f2 = f0;
            }
            wrf32d(param_1 + 0x948u, f2);
            a.r[0] = param_1;
            (void)tc_call(0x8006ca24u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800c0808u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x80186728u, &a);
            a.r[0] = param_1;
            f1 = tc_callf(0x800f2c58u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x30u), &a);
            f1 = tc_lastf();
            r29 = r3;
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfd8u, rd32(r3));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r29;
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x802343a4u, &a);
            wrf32d(param_1 + 0x268u, (f64)rdf32(0x817fdfd8u));
            wrf32d(param_1 + 0x26cu, (f64)rdf32(0x817fdfdcu));
            wrf32d(param_1 + 0x270u, (f64)rdf32(0x817fdfe0u));
        } else {
            a.r[0] = param_1;
            (void)tc_call(0x8006ca24u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800f2c58u, &a);
        }
    } else {
        a.r[0] = param_1 + 0x210u;
        a.r[1] = param_1;
        (void)tc_call(0x800dbd88u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x800f2c58u, &a);
    }
    (void)tc_call(0x80081be0u, &a);
    return;
}
