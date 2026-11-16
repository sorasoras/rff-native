#include "tc_rt.h"

u32 fn_800cea54(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b14d4u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x804b14fcu;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x804b1524u;
    (void)tc_call(0x8007ae84u, &a);
    wr32(0x804b1540u, 0u);
    wr32(0x804b1544u, 0u);
    wr32(0x804b1548u, 0u);
    wr32(0x804b154cu, 0u);
    wr32(0x804b1550u, 0u);
    wr32(0x804b1554u, 0u);
    wr32(0x804b1558u, 0u);
    wr32(0x804b155cu, 0u);
    wr32(0x804b1560u, 0u);
    wr32(0x804b1564u, 0u);
    wr32(0x804b1568u, 0u);
    wr32(0x804b156cu, 0u);
    wr32(0x804b1570u, 0u);
    wr32(0x804b1574u, 0u);
    wr32(0x804b1578u, 0u);
    wr32(0x804b157cu, 0u);
    wr32(0x804b1580u, 0u);
    wr32(0x804b1584u, 0u);
    wr32(0x804b1588u, 0u);
    wr32(0x804b158cu, 0u);
    wr32(0x805711e8u, 0u);
    wr32(0x805711ecu, 0u);
    wr32(0x805711f0u, 0u);
    wr32(0x804b1590u, 0u);
    return 1u;
}
