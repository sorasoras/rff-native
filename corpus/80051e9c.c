#include "tc_rt.h"

void fn_80051e9c(f64 param_1, u32 param_2)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80051d5cu, &a);
    r30 = rd32(0x805710ecu);
    r29 = rd32(0x805710e8u);
    wr32(0x805710ecu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8004e22cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 1u;
    (void)tc_call(0x8003d05cu, &a);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, param_1);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, param_1);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572268u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
    wrf32d(0xcc008000u, param_1);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572294u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572298u));
    wrf32d(0xcc008000u, param_1);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    wr32(0x805710ecu, r30);
    a.r[0] = (((0u - r30) | r30) >> 0x1fu) & 1u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, r29);
    a.r[0] = (((0u - r29) | r29) >> 0x1fu) & 1u;
    (void)tc_call(0x8004e22cu, &a);
    return;
}
