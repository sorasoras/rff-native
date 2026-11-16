#include "tc_rt.h"

void fn_8003cf68(void)
{
    u32 r31 = 0;
    f64 f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    wr32(0x803be5f8u, 0u);
    wr32(0x803be5fcu, 0u);
    wr32(0x803be600u, 0u);
    wr32(0x803be604u, 0u);
    wr8(0x803be608u, 0u);
    wr8(0x803be609u, 0u);
    do {
        f1 = (f64)rdf32(0x80571fa8u);
        f3 = (f64)rdf32(0x80571facu);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f3;
        a.f[3] = f1;
        a.f[4] = f1;
        a.f[5] = f3;
        a.r[0] = r31;
        (void)tc_call(0x8003da3cu, &a);
        f1 = (f64)rdf32(0x80571fa8u);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = (f64)rdf32(0x80571facu);
        a.r[0] = r31;
        (void)tc_call(0x8003d874u, &a);
        f1 = (f64)rdf32(0x80571fa8u);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = r31;
        (void)tc_call(0x8003d834u, &a);
        f1 = (f64)rdf32(0x80571facu);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.f[3] = (f64)rdf32(0x80571fa8u);
        a.r[0] = r31;
        (void)tc_call(0x8003d8b4u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 8);
    f1 = (f64)rdf32(0x80571facu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.f[3] = f1;
    (void)tc_call(0x8003d7fcu, &a);
    f1 = (f64)rdf32(0x80571facu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.f[3] = f1;
    (void)tc_call(0x8003d818u, &a);
    f1 = (f64)rdf32(0x80571fa8u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = (f64)rdf32(0x80571facu);
    a.r[0] = 0u;
    (void)tc_call(0x8003db38u, &a);
    return;
}
