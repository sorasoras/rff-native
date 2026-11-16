#include "tc_rt.h"

void fn_80036418(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4)
{
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = 0x8057064cu;
    a.r[1] = 0x8057064cu;
    a.r[2] = 1u;
    (void)tc_call(0x8003d05cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 5u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f1 = (f64)(f32)(param_f1 + param_f3);
    wrf32d(0xcc008000u, param_f1);
    f2 = (f64)(f32)(param_f2 + param_f4);
    wrf32d(0xcc008000u, param_f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571ee0u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, param_f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571ee0u));
    wrf32d(0xcc008000u, param_f1);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571ee0u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571ee0u));
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
