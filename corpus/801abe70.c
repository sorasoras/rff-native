#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801abe70(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r5 = rd32((u32)param_1 + 0xf0u);
    if ((s32)r5 <= 0) {
        wr32((u32)param_1 + 0xf0u, r5 + 1u);
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0x80480000u;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80575a50u);
        a.r[0] = param_2;
        a.r[1] = r3;
        r3 = tc_call(0x801c3410u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        if (r3 == 0u) {
            if ((u32)(s8)rd8(0x80571364u) == 0u) {
                wr32(0x804dbe38u, 0x80371cd0u);
                a.r[0] = 0x804dbe38u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804dbe3cu, r3);
                wr32(0x804dbe38u, 0x80372f30u);
                wr8(0x80571364u, 1u);
            }
            a.r[0] = param_2 + 0xcfcu;
            a.r[1] = rd32(0x804dbe3cu);
            (void)tc_call(0x801c3608u, &a);
            if ((u32)(s8)rd8(0x80571361u) == 0u) {
                a.r[0] = 0x804db898u;
                (void)tc_call(0x801ab6a0u, &a);
                a.r[0] = 0x804db898u;
                a.r[1] = 0x801ab454u;
                a.r[2] = 0x804db638u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571361u, 1u);
            }
            a.r[0] = param_2 + 0xcfcu;
            a.r[1] = rd32(0x804db89cu);
            (void)tc_call(0x801c36bcu, &a);
            return;
        }
    }
    wr32((u32)param_1 + 0xf0u, 0u);
    wr32(param_2 + 0xd34u, 0u);
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = (f64)rdf32(0x80575a9cu);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    wr32(0x817fdfccu, rd32(param_2 + 0x150u));
    wr32(0x817fdfc8u, 8u);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    f1 = tc_callf(0x8014a130u, &a);
    f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575a90u));
    a.r[0] = 0x817fdfccu;
    r3 = tc_call(0x801495bcu, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfd4u, r3);
    f2 = rdf64(0x80575aa0u);
    wr32(0x817fdfd0u, 0x43300000u);
    f2 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfd0u) - f2));
    a.f[0] = (f64)rdf32(0x80575aa8u);
    a.f[1] = f2;
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0u;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0x415u;
    (void)tc_call(0x8006f570u, &a);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = rd32(param_2 + 0x70u);
    a.r[2] = 0x68u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800701d4u, &a);
    if (rd32((u32)param_1 + 0x50u) == 0u) {
        a.r[0] = (u32)param_1 + 8u;
        (void)tc_call(0x8006ff58u, &a);
    }
    wr32((u32)param_1 + 0xecu, 0u);
    return;
}
