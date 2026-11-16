#include "tc_rt.h"

u32 fn_8005e944(s32 param_1)
{
    f64 f0 = 0.0;
    wr32(0x80571174u, 9u);
    f0 = (f64)rdf32(0x80572430u);
    wr32(0x8057115cu, 9u);
    wr32((u32)param_1 + 0xcu, 0xau);
    wrf32d(rd32(0x804863d8u) + 0x948u, f0);
    return 1u;
}
