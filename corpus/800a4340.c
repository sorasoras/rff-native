#include "tc_rt.h"

static u32 px_rec(u32 sp_, s32 param_1, u32 param_2)
{
    u32 c1eq = 0, r1 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    c1eq = (u32)param_1 == 0u;
    wr32(r1 + 0x34u, 0x817ff000u);
    wr32(r1 + 0x2cu, 0u);
    wr32(r1 + 0x28u, 0u);
    wr32(r1 + 0x24u, 0u);
    if (param_1 < 0 || param_1 >= 33) {
        r3 = 0u;
    } else if (!c1eq) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80074e90u, &a);
        if (r3 == 0u) {
            f0 = (f64)rdf32(0x80572ad8u);
            wrf32d(r1 + 0x14u, f0);
            wrf32d(r1 + 0x18u, f0);
            wrf32d(r1 + 0x1cu, f0);
            if (param_2 != 0u) {
                wrf32d(r1 + 0x14u, (f64)rdf32(param_2));
                wrf32d(r1 + 0x18u, (f64)rdf32(param_2 + 4u));
                wrf32d(r1 + 0x1cu, (f64)rdf32(param_2 + 8u));
            }
            f0 = (f64)rdf32(0x80572ad8u);
            wrf32d(r1 + 8u, f0);
            wrf32d(r1 + 0xcu, f0);
            wrf32d(r1 + 0x10u, f0);
            a.r[0] = (u32)param_1;
            a.r[1] = r1 + 0x14u;
            a.r[2] = r1 + 8u;
            r3 = tc_call(0x80072ac4u, &a);
            r31 = r3;
            if ((u32)param_1 == 0xbu) {
                r3 = px_rec(r1, 0x18u, 0u);
            }
        } else {
            r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
            if (param_2 != 0u) {
                f2 = (f64)rdf32(param_2);
                wrf32d(r31 + 0x84u, f2);
                f1 = (f64)rdf32(param_2 + 4u);
                wrf32d(r31 + 0x88u, f1);
                f0 = (f64)rdf32(param_2 + 8u);
                wrf32d(r31 + 0x8cu, f0);
                wrf32d(r31 + 4u, f2);
                wrf32d(r31 + 8u, f1);
                wrf32d(r31 + 0xcu, f0);
            }
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800a4490u, &a);
        r3 = r31;
    } else {
        r3 = rd32(0x804863d8u);
        if (param_2 != 0u) {
            f2 = (f64)rdf32(param_2);
            wrf32d(r3 + 0x84u, f2);
            f1 = (f64)rdf32(param_2 + 4u);
            wrf32d(r3 + 0x88u, f1);
            f0 = (f64)rdf32(param_2 + 8u);
            wrf32d(r3 + 0x8cu, f0);
            wrf32d(r3 + 4u, f2);
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f0);
        }
    }
    return r3;
}

s32 fn_800a4340(s32 param_1, u32 param_2)
{
    return (s32)px_rec(0x817fe000u, param_1, param_2);
}
