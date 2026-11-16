#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800471dc(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f3 = rdf64(0x80572150u);
    wr32(0x817fe004u, 0x817ff000u);
    f1 = (f64)rdf32(0x8057214cu);
    wr32(0x817fdffcu, 0u);
    f0 = (f64)rdf32(0x80572148u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff0u, 0x43300000u);
    wr32(0x817fdff4u, rd32(0x803c1dd0u) * 0x28u);
    f1 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdff0u) - f3), f1);
    f1 = (f64)(f32)(f0 + f1);
    a.f[0] = f1;
    r3 = tc_call(0x802558e4u, &a);
    r31 = ((r3 + 0x1fu) << 1u) & 0xffffffc0u;
    a.r[0] = 0x1fu;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x80243534u, &a);
    wr32(0x80571054u, r3);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x803c1dccu) == 2u) {
            wr32(0x817fdfd8u, 0u);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0xfffffc78u;
            a.r[4] = 0xfffffc78u;
            a.r[5] = 0xfffffc78u;
            a.r[6] = 0u;
            a.r[7] = 0x7fu;
            a.s[0] = rd32(0x817fdfd8u);
            (void)tc_call(0x80249974u, &a);
        } else {
            wr32(0x817fdfd8u, 0u);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0xfffffc78u;
            a.r[4] = 0xfffffc78u;
            a.r[5] = 0xfffffc78u;
            a.r[6] = 0x40u;
            a.r[7] = 0x7fu;
            a.s[0] = rd32(0x817fdfd8u);
            (void)tc_call(0x80249974u, &a);
        }
        r4 = rd32(0x8057105cu);
        wr16(0x817fdfe2u, 0xau);
        r6 = r4 - 0x80000000u;
        wr16(0x817fdfe0u, 1u);
        r5 = (r6 >> 0x11u) & 0x7fffu;
        r7 = (((r6 + r31) >> 1u) & 0x7fffffffu) - 1u;
        r6 = (r6 >> 1u) & 0xffffu;
        r3 = rd32(0x80571054u);
        wr16(0x817fdfe4u, (u16)r5);
        wr16(0x817fdfe6u, (u16)r6);
        wr16(0x817fdfe8u, (u16)((r7 >> 0x10u) & 0xffffu));
        wr16(0x817fdfeau, (u16)r7);
        wr16(0x817fdfecu, (u16)r5);
        wr16(0x817fdfeeu, (u16)r6);
        a.r[0] = r3;
        a.r[1] = 0x817fdfe0u;
        (void)tc_call(0x80246338u, &a);
        if (rd32(0x803c1dd0u) == 0x7d00u) {
            a.r[0] = rd32(0x80571054u);
            a.r[1] = 0u;
            (void)tc_call(0x80246208u, &a);
        } else {
            a.r[0] = rd32(0x80571054u);
            a.r[1] = 3u;
            (void)tc_call(0x80246208u, &a);
            r3 = rd32(0x803c1dd0u);
            wr32(0x817fdff0u, 0x43300000u);
            f2 = rdf64(0x80572150u);
            wr32(0x817fdff4u, r3);
            a.f[0] = (f64)(f32)px_fdiv(rdf64(0x817fdff0u) - f2, rdf64(0x80572160u));
            a.r[0] = rd32(0x80571054u);
            (void)tc_call(0x80246484u, &a);
        }
        if (rd32(0x803c1dccu) == 2u) {
            a.r[0] = 0x1fu;
            a.r[1] = 0u;
            a.r[2] = 0u;
            r3 = tc_call(0x80243534u, &a);
            wr32(0x80571058u, r3);
            if (r3 == 0u) {
                a.r[0] = rd32(0x80571054u);
                (void)tc_call(0x8024b034u, &a);
                a.r[0] = rd32(0x80571054u);
                (void)tc_call(0x802434b8u, &a);
                r3 = 0u;
                wr32(0x80571054u, 0u);
                return r3;
            }
            wr32(0x817fdfd8u, 0u);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0xfffffc78u;
            a.r[4] = 0xfffffc78u;
            a.r[5] = 0xfffffc78u;
            a.r[6] = 0x7fu;
            a.r[7] = 0x7fu;
            a.s[0] = rd32(0x817fdfd8u);
            (void)tc_call(0x80249974u, &a);
            r4 = rd32(0x80571060u);
            wr16(0x817fdfe2u, 0xau);
            r6 = r4 - 0x80000000u;
            wr16(0x817fdfe0u, 1u);
            r5 = (r6 >> 0x11u) & 0x7fffu;
            r7 = (((r6 + r31) >> 1u) & 0x7fffffffu) - 1u;
            r6 = (r6 >> 1u) & 0xffffu;
            r3 = rd32(0x80571058u);
            wr16(0x817fdfe4u, (u16)r5);
            wr16(0x817fdfe6u, (u16)r6);
            wr16(0x817fdfe8u, (u16)((r7 >> 0x10u) & 0xffffu));
            wr16(0x817fdfeau, (u16)r7);
            wr16(0x817fdfecu, (u16)r5);
            wr16(0x817fdfeeu, (u16)r6);
            a.r[0] = r3;
            a.r[1] = 0x817fdfe0u;
            (void)tc_call(0x80246338u, &a);
            if (rd32(0x803c1dd0u) == 0x7d00u) {
                a.r[0] = rd32(0x80571058u);
                a.r[1] = 0u;
                (void)tc_call(0x80246208u, &a);
            } else {
                a.r[0] = rd32(0x80571058u);
                a.r[1] = 3u;
                (void)tc_call(0x80246208u, &a);
                r3 = rd32(0x803c1dd0u);
                wr32(0x817fdff0u, 0x43300000u);
                f2 = rdf64(0x80572150u);
                wr32(0x817fdff4u, r3);
                a.f[0] = (f64)(f32)px_fdiv(rdf64(0x817fdff0u) - f2, rdf64(0x80572160u));
                a.r[0] = rd32(0x80571058u);
                (void)tc_call(0x80246484u, &a);
            }
        }
        r0 = rd32(0x803c1dccu);
        wr32(0x803c2738u, 0u);
        wr32(0x803c273cu, 0u);
        wr32(0x803c274cu, 0u);
        wr32(0x803c2748u, 0u);
        wr32(0x803c2754u, 0u);
        wr32(0x803c2750u, 0u);
        if (r0 == 2u) {
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = rd32(0x80571060u);
            a.r[2] = (r31 >> 1u) & 0x7fffffffu;
            (void)tc_call(0x80047c7cu, &a);
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = r31;
            (void)tc_call(0x80227738u, &a);
            a.r[0] = rd32(0x80571060u);
            a.r[1] = r31;
            (void)tc_call(0x80227738u, &a);
        } else {
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = 0u;
            a.r[2] = (r31 >> 1u) & 0x7fffffffu;
            (void)tc_call(0x80047c7cu, &a);
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = r31;
            (void)tc_call(0x80227738u, &a);
        }
        r3 = 1u;
        wr32(0x803c2740u, ((rd32(0x8057105cu) - 0x80000000u) >> 1u) & 0x7fffffffu);
    }
    return r3;
}
