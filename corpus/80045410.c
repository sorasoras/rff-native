#include "tc_rt.h"

void fn_80045410(u32 param_1)
{
    u32 r4 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1) == 0u) {
        f3 = (f64)rdf32(0x80572104u);
        r4 = (u32)(s16)rd16(param_1 + 0xd8u) ^ 0x80000000u;
        wr32(0x817fdfe8u, 0x43300000u);
        f4 = rdf64(0x80572110u);
        wr32(0x817fdfecu, r4);
        a.f[0] = (f64)(f32)((f64)rdf32(0x80572100u) * (f64)(f32)(rdf64(0x817fdfe8u) - f4));
        a.f[1] = (f64)rdf32(param_1 + 0xdcu);
        a.f[2] = f3;
        a.f[3] = (f64)rdf32(0x80572108u);
        a.f[4] = f3;
        a.f[5] = f3;
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x80233f9cu, &a);
    } else {
        f1 = (f64)rdf32(param_1 + 0xfcu);
        f5 = (f64)rdf32(0x80572104u);
        f4 = (f64)(f32)(f1 * (f64)rdf32(param_1 + 0xdcu));
        a.f[0] = f1;
        a.f[1] = -f1;
        a.f[2] = -f4;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = (f64)rdf32(0x80572108u);
        a.f[6] = f5;
        a.f[7] = f5;
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x80234094u, &a);
    }
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_1 + 0x28u;
    a.r[2] = param_1 + 0x134u;
    (void)tc_call(0x802337a0u, &a);
    if (rd32(param_1 + 0x194u) == 2u) {
        a.r[0] = param_1;
        a.r[1] = param_1;
        (void)tc_call(0x80045318u, &a);
    }
    return;
}
