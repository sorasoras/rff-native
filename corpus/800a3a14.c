#include "tc_rt.h"

void fn_800a3a14(void)
{
    TcArgs a = {0};
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    wrf32d(0xcc008000u, (f64)rdf32(0x80572aecu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572aecu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572af0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572aecu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572adcu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572aecu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572af0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572adcu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572af0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572af0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572ad8u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572adcu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80572adcu));
    return;
}
