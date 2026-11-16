#include "tc_rt.h"

u32 fn_80210178(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f2a1cu, &a);
    wr32(param_1, 0x803785d0u);
    a.r[0] = param_1 + 0x254u;
    (void)tc_call(0x80051438u, &a);
    a.r[0] = param_1 + 0x29cu;
    (void)tc_call(0x80161490u, &a);
    f0 = (f64)rdf32(0x80576880u);
    wrf32d(param_1 + 0x41cu, f0);
    wrf32d(param_1 + 0x418u, f0);
    wrf32d(param_1 + 0x414u, f0);
    wrf32d(param_1 + 0x428u, f0);
    wrf32d(param_1 + 0x424u, f0);
    wrf32d(param_1 + 0x420u, f0);
    wrf32d(param_1 + 0x434u, f0);
    wrf32d(param_1 + 0x430u, f0);
    wrf32d(param_1 + 0x42cu, f0);
    wrf32d(param_1 + 0x448u, f0);
    wrf32d(param_1 + 0x444u, f0);
    wrf32d(param_1 + 0x440u, f0);
    wrf32d(param_1 + 0x454u, f0);
    wrf32d(param_1 + 0x450u, f0);
    wrf32d(param_1 + 0x44cu, f0);
    wrf32d(param_1 + 0x460u, f0);
    wrf32d(param_1 + 0x45cu, f0);
    wrf32d(param_1 + 0x458u, f0);
    a.r[0] = param_1 + 0x488u;
    a.r[1] = 0x802113a8u;
    a.r[2] = 0x80210294u;
    a.r[3] = 0xf8u;
    a.r[4] = 0xcu;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x1028u;
    (void)tc_call(0x80210efcu, &a);
    f0 = (f64)rdf32(0x80576880u);
    wr32(param_1 + 0x408u, 0u);
    wr32(param_1 + 0x40cu, 0u);
    wrf32d(param_1 + 0x1214u, f0);
    a.r[0] = param_1 + 0x1028u;
    a.r[1] = param_1 + 0x29cu;
    (void)tc_call(0x802110a4u, &a);
    r31 = param_1 + 0x488u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = param_1 + 0x29cu;
        (void)tc_call(0x802114a8u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0xf8u;
    } while ((s32)r30 < 12);
    wr32(param_1 + 0x480u, 0xffffffffu);
    return param_1;
}
