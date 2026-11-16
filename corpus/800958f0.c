#include "tc_rt.h"

void fn_800958f0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32((u32)param_1 + 0xd0u, 1u);
    if ((rd32(0x8057118cu) & 0x20000u) != 0u) {
        r4 = (u32)rd16((u32)param_1 + 0x100u);
        if (r4 != 0u) {
            wr32(0x817fdfecu, r4);
            f1 = rdf64(0x80572a48u);
            wr32(0x817fdfe8u, 0x43300000u);
            if ((f64)rdf32(0x80572a40u) == (f64)(f32)(rdf64(0x817fdfe8u) - f1)) {
                f2 = (f64)rdf32((u32)param_1 + 0xc4u);
                f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xc8u) + (f64)rdf32(0x80572a54u));
                wrf32d(0x817fdfe0u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xccu) + (f64)rdf32(0x80572a50u)));
                f1 = (f64)rdf32(0x80572a3cu);
                wrf32d(0x817fdfd8u, f2);
                wrf32d(0x817fdfdcu, f0);
                a.f[0] = f1;
                a.r[0] = 0x70u;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            }
            r3 = (u32)rd16((u32)param_1 + 0x100u);
            wr32(0x817fdfe8u, 0x43300000u);
            f2 = rdf64(0x80572a48u);
            wr32(0x817fdfecu, r3);
            f0 = (f64)rdf32(0x80572a40u);
            f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f2);
            if (!((f1 < f0) || (f1 == f0))) {
                return;
            }
            wr16((u32)param_1 + 0x100u, (u16)(r3 - 1u));
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800959e0u, &a);
        }
    }
    return;
}
