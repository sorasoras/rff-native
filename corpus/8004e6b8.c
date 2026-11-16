#include "tc_rt.h"

void fn_8004e6b8(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4)
{
    TcArgs a = {0};
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    wrf32d(0xcc008000u, param_f1);
    wrf32d(0xcc008000u, param_f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, param_f3);
    wrf32d(0xcc008000u, param_f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x8057223cu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, param_f1);
    wrf32d(0xcc008000u, param_f4);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x8057223cu));
    wrf32d(0xcc008000u, param_f3);
    wrf32d(0xcc008000u, param_f4);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572238u));
    wrf32d(0xcc008000u, (f64)rdf32(0x8057223cu));
    wrf32d(0xcc008000u, (f64)rdf32(0x8057223cu));
    return;
}
