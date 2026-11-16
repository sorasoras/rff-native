#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80304bd8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, s32 param_7, s32 param_8)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_4 + 8u);
    r23 = 0u;
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfa8u, r0);
    r31 = param_6;
    r22 = 0u;
    if ((u32)param_7 != 0u) {
        r23 = (u32)param_7;
        wr32(0x817fdfacu, 0u);
        a.r[0] = 0x817fdfc0u;
        a.r[1] = (u32)param_7;
        (void)tc_call(0x802fd05cu, &a);
        if ((u32)param_8 != 0u) {
            a.r[0] = 0x817fdfc0u;
            a.r[1] = (u32)param_8;
            a.r[2] = 0x817fdfacu;
            r3 = tc_call(0x802fd0d8u, &a);
            if (r3 == 0u) {
                return;
            }
        }
        a.r[0] = 0x817fdfc0u;
        r3 = tc_call(0x802fd0c8u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x817fdfacu);
        a.r[2] = 0x817fdfa8u;
        r3 = tc_call(0x802fc0a0u, &a);
        wr32(0x817fdfacu, r3);
    }
    if (r23 == 0u) {
        a.r[0] = param_1;
        a.r[1] = rd32(param_3);
        r3 = tc_call(0x80303ee8u, &a);
        r23 = r3;
        wr32(0x817fdfacu, rd32(param_4));
        if ((u32)param_8 != 0u) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r3;
            (void)tc_call(0x802fd05cu, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = (u32)param_8;
            a.r[2] = 0x817fdfacu;
            r3 = tc_call(0x802fd0d8u, &a);
            if (r3 == 0u) {
                return;
            }
        }
    }
    if (r23 == 0u) {
        r24 = rd32(param_2 + 4u);
        if (r24 == 0u) {
            return;
        }
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = rd32(param_3);
        a.r[2] = param_2 + 0x29cu;
        a.r[3] = 0x200u;
        r3 = tc_call(0x80301544u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r22 = r3;
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x40u), &a);
        r25 = r3;
        a.r[0] = r24;
        r3 = tc_call(0x802fc484u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 < r25) {
            a.r[0] = r22;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(r22) + 0x10u), &a);
            return;
        }
    }
    a.r[0] = param_2;
    a.r[1] = rd32(param_1 + 0x2cu);
    a.r[2] = rd32(0x817fdfa8u);
    a.r[3] = param_1 + 0x1cu;
    r3 = tc_call(0x802fe76cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    for (;;) {
        if (r3 == 0u) {
            fl_ = 1u;
            break;
        }
        if (r3 != 1u) {
            return;
        }
        r0 = rd32(param_1 + 0x44u);
        if (r0 == 1u) {
            if (r22 != 0u) {
                a.r[0] = r22;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r22) + 0x10u), &a);
            }
            return;
        }
        if (r0 != 0u) {
            r3 = rd32(param_1 + 0x48u) - 0xe0u;
        } else {
            r3 = 0u;
        }
        if (param_2 == r3) {
            if (r22 != 0u) {
                a.r[0] = r22;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r22) + 0x10u), &a);
            }
            return;
        }
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802f5fd8u, &a);
        a.r[0] = param_2;
        a.r[1] = rd32(param_1 + 0x2cu);
        a.r[2] = rd32(0x817fdfa8u);
        a.r[3] = param_1 + 0x1cu;
        r3 = tc_call(0x802fe76cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
    }
    if (fl_ == 1u) {
        fl_ = 0u;
    }
    r4 = rd32(param_3 + 0x10u);
    wr32(0x817fdfc8u, 0x43300000u);
    f2 = rdf64(0x80577770u);
    wr32(0x817fdfccu, r4 ^ 0x80000000u);
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfc8u) - f2), (f64)rdf32(0x80577768u));
    a.r[0] = param_2;
    (void)tc_call(0x802f7168u, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(param_3 + 0x14u);
    (void)tc_call(0x802f7284u, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(param_3 + 0x18u);
    (void)tc_call(0x802f72c0u, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(param_3 + 0x1cu);
    (void)tc_call(0x802f72fcu, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(param_4 + 0xcu);
    (void)tc_call(0x802feb00u, &a);
    a.r[0] = param_2;
    a.r[1] = (u32)rd8(param_4 + 0x10u);
    (void)tc_call(0x802feb08u, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(param_1 + 0x30u);
    a.r[2] = rd32(param_1 + 0x34u);
    (void)tc_call(0x802feb10u, &a);
    c0lt = param_5 < 1;
    if ((u32)param_5 == 1u) {
        r24 = 0u;
    } else if (!c0lt) {
        if (param_5 >= 3) {
            r24 = 0u;
            r31 = 0u;
        } else {
            r24 = 0u;
            r31 = 0u;
        }
    } else if (param_5 >= 0) {
        r24 = 1u;
    } else {
        r24 = 0u;
        r31 = 0u;
    }
    if (r23 == 0u) {
        a.r[0] = param_2;
        a.r[1] = r22;
        a.r[2] = rd32(0x817fdfacu);
        a.r[3] = r24;
        a.r[4] = r31;
        (void)tc_call(0x802fe850u, &a);
        return;
    }
    a.r[0] = 0x817fdfb0u;
    a.r[1] = r23;
    (void)tc_call(0x802fd05cu, &a);
    a.r[0] = 0x817fdfb0u;
    r3 = tc_call(0x802fd0c8u, &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = rd32(0x817fdfacu);
    a.r[3] = r24;
    a.r[4] = r31;
    (void)tc_call(0x802fe7e8u, &a);
    return;
}
