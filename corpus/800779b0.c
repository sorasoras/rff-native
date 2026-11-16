#include "tc_rt.h"

void fn_800779b0(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(rd32(0x804863d8u) + 0x290u) != 0x19u) {
        f3 = (f64)rdf32(0x8057272cu);
        f4 = (f64)rdf32(0x80572740u);
        f0 = (f64)rdf32(param_1 + 8u);
        wrf32d(0x817fdfa4u, f3);
        f2 = (f64)rdf32(param_1);
        f1 = (f64)rdf32(param_1 + 4u);
        wrf32d(0x817fdfb4u, f3);
        wrf32d(0x817fdfc8u, f4);
        wrf32d(0x817fdfd8u, f3);
        wrf32d(0x817fdfe8u, f3);
        wrf32d(0x817fdfccu, f3);
        wrf32d(0x817fdfdcu, f4);
        wrf32d(0x817fdfecu, f3);
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfe0u, f3);
        wrf32d(0x817fdff0u, f4);
        wrf32d(0x817fdfd4u, f3);
        wrf32d(0x817fdfe4u, f3);
        wrf32d(0x817fdff4u, f3);
        wrf32d(0x817fdf98u, f4);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdfb8u, f3);
        wrf32d(0x817fdf9cu, f3);
        wrf32d(0x817fdfacu, f4);
        wrf32d(0x817fdfbcu, f3);
        wrf32d(0x817fdfa0u, f3);
        wrf32d(0x817fdfb0u, f3);
        wrf32d(0x817fdfc0u, f4);
        wrf32d(0x817fdfa4u, f2);
        wrf32d(0x817fdfb4u, f1);
        wrf32d(0x817fdfc4u, f0);
        a.r[0] = 0x817fdf98u;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = rd32(0x804865dcu);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x800315c0u, &a);
        a.r[0] = rd32(0x804865dcu);
        a.r[1] = param_2;
        (void)tc_call(0x800318a8u, &a);
    }
    return;
}
