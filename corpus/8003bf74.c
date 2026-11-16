#include "tc_rt.h"

void fn_8003bf74(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x8003bf48u, &a);
    if (r3 == 1u) {
        a.f[0] = (f64)rdf32(0x80571f74u);
        a.f[1] = (f64)rdf32(0x80571f78u);
        a.f[2] = (f64)rdf32(0x80571f7cu);
        a.f[3] = (f64)rdf32(0x80571f80u);
        a.f[4] = (f64)rdf32(0x80571f68u);
        a.f[5] = (f64)rdf32(0x80571f84u);
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x802342e8u, &a);
    } else {
        a.f[0] = (f64)rdf32(0x80571f74u);
        a.f[1] = (f64)rdf32(0x80571f78u);
        a.f[2] = (f64)rdf32(0x80571f88u);
        a.f[3] = (f64)rdf32(0x80571f8cu);
        a.f[4] = (f64)rdf32(0x80571f68u);
        a.f[5] = (f64)rdf32(0x80571f84u);
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x802342e8u, &a);
    }
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 1u;
    (void)tc_call(0x802543b0u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 4u;
    a.r[1] = 9u;
    a.r[2] = 0u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 4u;
    a.r[1] = 0xbu;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    a.r[0] = 0xbu;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80251e90u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8025016cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x802539bcu, &a);
    a.r[0] = 0u;
    a.r[1] = 0xffu;
    a.r[2] = 0xffu;
    a.r[3] = 4u;
    (void)tc_call(0x80253860u, &a);
    a.r[0] = 0u;
    a.r[1] = 4u;
    (void)tc_call(0x80253360u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x80044e24u, &a);
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 3u;
    (void)tc_call(0x80044e3cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80044e28u, &a);
    return;
}
