#include "tc_rt.h"

u32 fn_80148ae4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801efc58u, &a);
    wr32(param_1, 0x80365390u);
    wr32(param_1 + 0x150u, 0x8036547cu);
    a.r[0] = param_1 + 0x1f4u;
    a.r[1] = 0x80148c14u;
    a.r[2] = 0x80147948u;
    a.r[3] = 0x3cu;
    a.r[4] = 0x14u;
    (void)tc_call(0x80255624u, &a);
    f1 = (f64)rdf32(0x80574680u);
    wrf32d(param_1 + 0x7a0u, f1);
    f0 = (f64)rdf32(0x80574684u);
    wr32(param_1 + 0x744u, 0x80365488u);
    wrf32d(param_1 + 0x79cu, f1);
    wrf32d(param_1 + 0x798u, f1);
    wrf32d(param_1 + 0x7acu, f1);
    wrf32d(param_1 + 0x7a8u, f1);
    wrf32d(param_1 + 0x7a4u, f1);
    wrf32d(param_1 + 0x7b8u, f1);
    wrf32d(param_1 + 0x7b4u, f1);
    wrf32d(param_1 + 0x7b0u, f1);
    wr32(param_1 + 0x148u, 1u);
    wr32(param_1 + 0x778u, 0xffffffffu);
    wr32(param_1 + 0x77cu, 0xffffffffu);
    wr32(param_1 + 0x780u, 0xffffffffu);
    wr32(param_1 + 0x78cu, 0xffffffffu);
    wr32(param_1 + 0x790u, 0xffffffffu);
    wr32(param_1 + 0x794u, 0xffffffffu);
    wrf32d(param_1 + 0x798u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x79cu, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x7a0u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x7a4u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x7a8u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x7acu, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x7b0u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x7b4u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x7b8u, (f64)rdf32(0x804890d0u));
    wr32(param_1 + 0x788u, 0xfu);
    wr32(param_1 + 0x784u, 0u);
    wr32(param_1 + 0x7c0u, 0u);
    wrf32d(param_1 + 0x7bcu, f0);
    wr32(param_1 + 0x774u, 1u);
    return param_1;
}
