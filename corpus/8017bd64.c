#include "tc_rt.h"

void fn_8017bd64(s32 param_1)
{
    u32 ctr = 0, r5 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8017dc34u, &a);
    r31 = (u32)param_1;
    wr32((u32)param_1 + 0x8cu, 0u);
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8007ae84u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 4u);
    a.r[0] = (u32)param_1 + 0x70u;
    (void)tc_call(0x8007ae84u, &a);
    r7 = (u32)param_1;
    f1 = (f64)rdf32(0x80575028u);
    ctr = 5u;
    do {
        r5 = r7 + 0x10000u;
        r7 = r7 + 0x78u;
        wrf32d(r5 + 0x358u, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x35cu, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x360u, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x364u, f1);
        wr16(r5 + 0x368u, 0u);
        wr16(r5 + 0x36au, 0u);
        wrf32d(r5 + 0x36cu, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x370u, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x374u, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x378u, f1);
        wr16(r5 + 0x37cu, 0u);
        wr16(r5 + 0x37eu, 0u);
        wrf32d(r5 + 0x380u, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x384u, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x388u, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x38cu, f1);
        wr16(r5 + 0x390u, 0u);
        wr16(r5 + 0x392u, 0u);
        wrf32d(r5 + 0x394u, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x398u, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x39cu, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x3a0u, f1);
        wr16(r5 + 0x3a4u, 0u);
        wr16(r5 + 0x3a6u, 0u);
        wrf32d(r5 + 0x3a8u, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x3acu, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x3b0u, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x3b4u, f1);
        wr16(r5 + 0x3b8u, 0u);
        wr16(r5 + 0x3bau, 0u);
        wrf32d(r5 + 0x3bcu, (f64)rdf32(0x804890c8u));
        wrf32d(r5 + 0x3c0u, (f64)rdf32(0x804890ccu));
        wrf32d(r5 + 0x3c4u, (f64)rdf32(0x804890d0u));
        wrf32d(r5 + 0x3c8u, f1);
        wr16(r5 + 0x3ccu, 0u);
        wr16(r5 + 0x3ceu, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    (void)tc_call(0x8017e4bcu, &a);
    wr32(0x8036f218u, 0u);
    r31 = (u32)param_1 + 0x98u;
    r30 = 0u;
    wr32(0x8036f220u, 0u);
    wr32(0x8036f228u, 0u);
    wr32(0x8036f230u, 0u);
    wr32(0x8036f238u, 0u);
    wr32(0x8036f240u, 0u);
    wr32(0x8036f248u, 0u);
    wr32(0x8036f250u, 0u);
    wr32(0x8036f258u, 0u);
    do {
        a.r[0] = r31;
        (void)tc_call(0x8017e758u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x114u;
    } while (r30 < 0xf0u);
    wr32((u32)param_1 + 0x105b0u, 0x3cu);
    return;
}
