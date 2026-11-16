#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f64 px_fdiv(f64 a,f64 b){return a/b;}

static f64 px_ctiw(f64 b,s32 w){u64 r=0xfff8000000000000ull|(u32)w;if(w==0&&(px_f2b(b)>>63)!=0)r|=0x100000000ull;return px_b2f(r);}

u32 fn_8010d6f0(s32 param_1,u32 param_2,s32 param_3){u32 c0lt=0,ctr=0,fl_=0,r0=0,r3=0,r4=0,r5=0,r6=0,r12=0,r29=0,r30=0;f64 f0=0.0,f1=0.0,f2=0.0,f3=0.0;
TcArgs a={0};TcArgs za={0};wr32(0x817fdf30u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wr32(0x817fdffcu,0u);wr32(0x817fdff8u,0u);wr32(0x817fdff4u,0u);
wr32(0x817fdff0u,0u);wr32(0x817fdfc0u,0x43300000u);wr32(0x817fdfc8u,0x43300000u);a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3);a=za;a.r[0]=r3;
r3=tc_call(0x800a3590u,&a);r29=(ppc_cntlzw(r3)>>5u)&0x7ffffffu;if(r29!=0u){a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x4cu);if(rd32(r3+0x30u)!=0u){a=za;
r3=tc_call(0x80097da4u,&a);r4=rd32(r3+0x4cu);r3=1u;wr32(r4+0x30u,0u);return r3;}a=za;r3=tc_call(0x80097da4u,&a);a=za;a.r[0]=r3;r3=tc_call(0x80096e1cu,&a);
if(r3!=0u){r3=1u;return r3;}}a=za;a.r[0]=(u32)param_1;(void)tc_call(0x800efc3cu,&a);if(r29!=0u){a=za;r3=tc_call(0x80097da4u,&a);a=za;a.r[0]=r3;
r3=tc_call(0x80096e1cu,&a);if(r3!=0u){r3=1u;return r3;}}if((u32)param_1!=0xc2u){a=za;(void)tc_call(0x80097da4u,&a);a=za;r3=tc_call(0x8010ec78u,&a);a=za;
a.r[0]=r3;a.r[1]=(u32)param_1;a.r[2]=param_2;a.r[3]=(u32)param_3;(void)tc_call(0x8010ecd8u,&a);}a=za;a.r[0]=(u32)param_1;a.r[1]=param_2;a.r[2]=(u32)param_3;
r3=tc_call(0x800efb50u,&a);f1=tc_lastf();if(r3!=1u){if(r3==2u){c0lt=param_1<283;if((u32)param_1==0x11bu){r4=rd32(0x8057114cu);
if(((((6u-r4)|(r4-6u))>>0x1fu)&1u)==0u){a=za;r3=tc_call(0x800a7488u,&a);if(r3==8u){a=za;a.r[0]=1u;(void)tc_call(0x80076a48u,&a);}}}else{do{if(!c0lt){
c0lt=param_1<346;if((u32)param_1==0x15au){r4=rd32(param_2+4u);r0=rd32(0x80471a18u);wr32(0x817fdfccu,rd32(param_2+8u)^0x80000000u);r4=r4^0x80000000u;
r0=r0*0x4150u;f1=rdf64(0x80574118u);wr32(0x817fdfc4u,r4);f2=(f64)(f32)(rdf64(0x817fdfc8u)-f1);r29=rd32(param_2);f1=(f64)(f32)(rdf64(0x817fdfc0u)-f1);
wrf32d(0x817fdf64u,(f64)rdf32(0x80574100u));wrf32d(0x817fdf60u,f1);wrf32d(0x817fdf68u,f2);a=za;a.f[0]=f1;a.f[1]=f2;a.r[0]=r0-0x7fb92738u;
f1=tc_callf(0x80089fc8u,&a);wrf32d(0x817fdf64u,f1);f1=rdf64(0x80574118u);wr32(0x817fdfccu,rd32(param_2+0xcu)^0x80000000u);f0=(f64)(f32)(rdf64(0x817fdfc8u)-f1);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd0u,f0);a=za;a.r[0]=rd32(0x817fdfd4u);f1=tc_callf(0x800a685cu,&a);a=za;a.f[0]=f1;a.r[0]=r29;
(void)tc_call(0x8020e5bcu,&a);fl_=1u;break;}if(c0lt){c0lt=param_1<317;if((u32)param_1==0x13du){a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x60u);a=za;a.r[0]=r3;
a.r[1]=rd32(param_2);(void)tc_call(0x80213570u,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<336;if((u32)param_1==0x150u){r4=rd32(param_2);if((s32)r4<0||(s32)r4>=8){
fl_=1u;break;}wr32(0x8057119cu,rd32(0x8057119cu)|(((r4&0x20u)!=0u)?0u:(1u<<(r4&0x1fu))));fl_=1u;break;}if(!c0lt){c0lt=param_1<343;if((u32)param_1==0x157u)break;
if(!c0lt){if(param_1>=345){a=za;r3=tc_call(0x800a7854u,&a);if(r3==0u){fl_=1u;break;}r3=rd32(r3+0xa48u);if(r3!=0u){r3=(u32)rd8(r3+0x79u);}else{r3=0u;}a=za;
a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}a=za;r3=tc_call(0x800a7854u,&a);if(r3==0u){fl_=1u;break;}r3=rd32(r3+0xa48u);if(r3!=0u){
r3=(u32)rd8(r3+0x78u);}else{r3=0u;}a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}c0lt=param_1<339;if((u32)param_1==0x153u){r4=rd32(param_2);
if((s32)r4<0||(s32)r4>=13){fl_=1u;break;}r4=r4+0xau;a=za;a.r[0]=0x8046d8c8u;a.r[1]=r4;(void)tc_call(0x8008bf2cu,&a);fl_=1u;break;}if(!c0lt||param_1>=338){
fl_=1u;break;}r5=rd32(param_2);r3=rd32(0x8057119cu)&(((r5&0x20u)!=0u)?0u:(1u<<(r5&0x1fu)));r3=(((0u-r3)|r3)>>0x1fu)&1u;a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}c0lt=param_1<326;if((u32)param_1==0x146u){a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x4cu);r3=rd32(r3+0x48u);a=za;
a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){if(param_1>=335){a=za;r3=tc_call(0x800a7460u,&a);a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);
fl_=1u;break;}if(param_1>=328){fl_=1u;break;}a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;a.r[0]=rd32(param_2);(void)tc_call(0x801b0fd8u,&a);fl_=1u;break;}
fl_=1u;break;}c0lt=param_1<324;if((u32)param_1==0x144u){fl_=1u;break;}if(!c0lt){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8013ff74u,&a);a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(param_1>=323){a=za;(void)tc_call(0x8013fbc0u,&a);fl_=1u;break;}fl_=1u;break;}c0lt=param_1<294;
if((u32)param_1==0x126u){a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;r3=tc_call(0x801b0c80u,&a);r29=r3;if(r3!=0u){r5=rd32(param_2+4u);
r6=rd32(param_2+8u)^0x80000000u;r0=rd32(param_2);wr32(0x817fdfc4u,r6);r5=r5^0x80000000u;r0=r0^0x80000000u;f2=rdf64(0x80574118u);f0=rdf64(0x817fdfc0u);
wr32(0x817fdfccu,r5);f3=(f64)(f32)(f0-f2);wr32(0x817fdfc4u,r0);f0=rdf64(0x817fdfc0u);f1=(f64)(f32)(rdf64(0x817fdfc8u)-f2);wrf32d(0x817fdf44u,f3);
f0=(f64)(f32)(f0-f2);wrf32d(0x817fdf40u,f1);wrf32d(0x817fdf3cu,f0);a=za;a.r[0]=r3;a.r[1]=0x817fdf3cu;a.r[2]=r5;a.r[3]=r6;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
(void)tc_call(rd32(rd32(r3)+0x1cu),&a);r4=tc_lastr4();if((u32)param_3!=4u){fl_=1u;break;}r12=rd32(r29);f2=rdf64(0x80574118u);
wr32(0x817fdfccu,rd32(param_2+0xcu)^0x80000000u);r12=rd32(r12+0x24u);a=za;a.r[0]=r29;a.r[1]=r4;
a.f[0]=(f64)(f32)((f64)rdf32(0x80574114u)*(f64)(f32)(rdf64(0x817fdfc8u)-f2));a.f[1]=f2;(void)tc_call(r12,&a);fl_=1u;break;}fl_=1u;break;}fl_=1u;break;}
if(!c0lt){c0lt=param_1<306;if((u32)param_1==0x132u){r3=rd32(param_2);r30=(((0u-r3)|r3)>>0x1fu)&1u;a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x60u);
wr32(r3+0x58u,r30);fl_=1u;break;}if(!c0lt){if((u32)param_1==0x138u){r3=rd32(param_2);if(((((0u-r3)|r3)>>0x1fu)&1u)==0u){
wr32(0x8057118cu,rd32(0x8057118cu)&0xffffff7fu);fl_=1u;break;}wr32(0x8057118cu,rd32(0x8057118cu)|0x80u);fl_=1u;break;}fl_=1u;break;}if((u32)param_1==0x128u){
if((s32)rd32(0x805711a4u)<0){fl_=1u;break;}if(rd32(0x80571260u)==0u){a=za;a.r[0]=1u;(void)tc_call(0x80209b60u,&a);wr32(0x80571260u,1u);}a=za;
r3=tc_call(0x80209bbcu,&a);if(r3!=0u){wr32(0x80571260u,0u);a=za;(void)tc_call(0x80209bb8u,&a);fl_=1u;break;}r3=1u;return r3;}fl_=1u;break;}c0lt=param_1<287;
if((u32)param_1==0x11fu){a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;r3=tc_call(0x801b0c80u,&a);r30=rd32(r3+0xbcu);if(r30==0u){fl_=1u;break;}
r29=rd32(r30+0x25cu);a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0xcu);a=za;a.r[0]=r3;a.r[1]=r29;a.r[2]=0xd7u;r3=tc_call(0x800ed39cu,&a);a=za;a.r[0]=r30;
a.r[1]=(u32)(s8)r3;a.r[2]=1u;a.f[0]=(f64)rdf32(0x80574110u);f1=tc_callf(rd32(rd32(r30)+0x54u),&a);f0=(f64)rdf32(0x80574100u);r3=rd32(0x804863d8u);
wrf32d(0x817fdf50u,f0);wrf32d(0x817fdf4cu,f0);wrf32d(0x817fdf48u,f0);a=za;a.r[0]=r3;a.r[1]=tc_lastr4();a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x28u),&a);a=za;
a.r[0]=0x817fdf48u;a.r[1]=r3;r3=tc_call(0x801b0cecu,&a);a=za;a.r[0]=0x817fdf48u;a.r[1]=r3;(void)tc_call(0x801b0e38u,&a);a=za;a.r[0]=0x817fdf48u;
(void)tc_call(0x801b0b54u,&a);fl_=1u;break;}fl_=1u;break;}if(!c0lt){if((u32)param_1==0x122u){r3=rd32(param_2);r29=(u32)rd8((r3*0x38u)-0x7fb64fcau);a=za;
a.r[0]=r3;a.r[1]=rd32(param_2+4u);(void)tc_call(0x800a7c60u,&a);wr8((rd32(param_2)*0x38u)-0x7fb64fcau,(u8)r29);fl_=1u;break;}fl_=1u;break;}c0lt=param_1<285;
if((u32)param_1==0x11du){a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;a.r[0]=rd32(0x804863d8u);(void)tc_call(0x800c4b50u,&a);a=za;
(void)tc_call(0x801b0718u,&a);fl_=1u;break;}fl_=1u;break;}if(!c0lt){a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;a.r[0]=rd32(param_2);
r3=tc_call(0x800a4500u,&a);r30=r3;a=za;a.r[0]=r3;(void)tc_call(0x801b08a8u,&a);r29=rd32(r30+0x25cu);a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0xcu);a=za;
a.r[0]=r3;a.r[1]=r29;a.r[2]=0x13u;r3=tc_call(0x800ed39cu,&a);f1=tc_lastf();r29=(u32)(s8)r3;a=za;a.r[0]=r30;a.r[1]=tc_lastr4();a.f[0]=f1;
r3=tc_call(rd32(rd32(r30)+0xacu),&a);f1=tc_lastf();a=za;a.r[0]=r30;a.f[0]=f1;f1=tc_callf(rd32(rd32(r30)+0xa8u),&a);a=za;a.r[0]=r30;a.r[1]=tc_lastr4();a.f[0]=f1;
f1=tc_callf(rd32(rd32(r30)+0x98u),&a);a=za;a.r[0]=r30;a.r[1]=r3;a.f[0]=f1;(void)tc_call(rd32(rd32(r30)+0xa8u),&a);a=za;a.r[0]=r30;a.r[1]=r29;a.r[2]=1u;
a.f[0]=(f64)rdf32(0x80574110u);(void)tc_call(rd32(rd32(r30)+0x54u),&a);fl_=1u;break;}fl_=1u;break;}fl_=1u;break;}c0lt=param_1<364;if((u32)param_1==0x16cu){
f0=(f64)rdf32(0x80574100u);r29=rd32(param_2);wrf32d(0x817fdf5cu,f0);wrf32d(0x817fdf58u,f0);wrf32d(0x817fdf54u,f0);a=za;a.r[0]=r29;r3=tc_call(0x800a7b08u,&a);
if(r3!=0u){a=za;a.r[0]=r29;r3=tc_call(0x800a4500u,&a);f1=tc_lastf();a=za;a.r[0]=r3;a.r[1]=tc_lastr4();a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x28u),&a);
f1=(f64)rdf32(r3+4u);f0=(f64)rdf32(r3+8u);wrf32d(0x817fdf54u,(f64)rdf32(r3));wrf32d(0x817fdf58u,f1);wrf32d(0x817fdf5cu,f0);}f0=(f64)rdf32(0x817fdf54u);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd0u,f0);a=za;a.r[0]=rd32(0x817fdfd4u);a.r[1]=9u;(void)tc_call(0x800a796cu,&a);f0=(f64)rdf32(0x817fdf58u);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd8u,f0);a=za;a.r[0]=rd32(0x817fdfdcu);a.r[1]=8u;(void)tc_call(0x800a796cu,&a);f0=(f64)rdf32(0x817fdf5cu);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfe0u,f0);a=za;a.r[0]=rd32(0x817fdfe4u);a.r[1]=7u;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(c0lt){
c0lt=param_1<355;if((u32)param_1==0x163u){a=za;a.r[0]=(ppc_cntlzw(rd32(param_2)-1u)>>5u)&0x7ffffffu;(void)tc_call(0x801b10dcu,&a);fl_=1u;break;}if(!c0lt){
c0lt=param_1<361;if((u32)param_1==0x169u){r29=rd32(param_2);f1=rdf64(0x80574118u);wr32(0x817fdfc4u,(rd32(param_2+4u)-r29)^0x80000000u);
f0=(f64)(f32)ppc_fabs((f64)(f32)(rdf64(0x817fdfc0u)-f1));f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd0u,f0);r30=rd32(0x817fdfd4u);a=za;
r3=tc_call(0x80040b64u,&a);r5=r30+1u;r3=r29+(r3-(ppc_divwu(r3,r5)*r5));a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){if(param_1>=363){
r0=rd32(param_2+4u);r3=0u;if(r0!=0u){r3=rd32(param_2);r0=r0^0x80000000u;wr32(0x817fdfccu,r0);f2=rdf64(0x80574118u);wr32(0x817fdfc4u,r3^0x80000000u);
f1=(f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfc0u)-f2),(f64)(f32)(rdf64(0x817fdfc8u)-f2))*(f64)rdf32(0x8057410cu));
wrf64(0x817fdfd0u,px_ctiw(f1,ppc_fctiwz(f1)));r3=rd32(0x817fdfd4u);}a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}fl_=1u;break;}c0lt=param_1<358;
if((u32)param_1==0x166u){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8010cff8u,&a);r29=r3;a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=r29;
(void)tc_call(0x800a3220u,&a);fl_=1u;break;}if(!c0lt||param_1>=357){fl_=1u;break;}r29=rd32(param_2);a=za;a.r[0]=1u;(void)tc_call(0x801b10dcu,&a);a=za;
a.r[0]=r29;a.r[1]=0x13u;(void)tc_call(0x8010cf60u,&a);fl_=1u;break;}c0lt=param_1<350;if((u32)param_1==0x15eu){fl_=1u;break;}if(!c0lt){c0lt=param_1<352;
if((u32)param_1==0x160u){a=za;(void)tc_call(0x800739d8u,&a);fl_=1u;break;}if(!c0lt){fl_=1u;break;}if(rd32(param_2)==0u){
wr32(0x8057118cu,rd32(0x8057118cu)&0xffffbfffu);fl_=1u;break;}wr32(0x8057118cu,rd32(0x8057118cu)|0x4000u);fl_=1u;break;}c0lt=param_1<348;
if((u32)param_1==0x15cu){a=za;a.r[0]=0x8046d8c8u;a.r[1]=rd32(param_2);a.r[2]=rd32(param_2+4u);(void)tc_call(0x8008c9b8u,&a);fl_=1u;break;}if(!c0lt){a=za;
r3=tc_call(0x8010d430u,&a);a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}a=za;a.r[0]=rd32(param_2);a.r[1]=rd32(param_2+4u);
(void)tc_call(0x8020e554u,&a);fl_=1u;break;}c0lt=param_1<396;if((u32)param_1==0x18cu){a=za;(void)tc_call(0x80224f10u,&a);fl_=1u;break;}if(!c0lt){
c0lt=param_1<541;if((u32)param_1==0x21du){a=za;a.r[0]=rd32(param_2);a.r[1]=rd32(param_2+4u);(void)tc_call(0x8010d5f8u,&a);fl_=1u;break;}if(!c0lt){
if((u32)param_1==0x221u){a=za;(void)tc_call(0x8013fb24u,&a);fl_=1u;break;}fl_=1u;break;}if((u32)param_1==0x21bu){
if((s32)rd32(param_2)<=0||(s32)rd32(param_2+4u)>=33){fl_=1u;break;}a=za;r3=tc_call(0x80097da4u,&a);r5=rd32(param_2+4u);r3=rd32(r3+0x60u);
r5=(((0u-r5)|r5)>>0x1fu)&1u;a=za;a.r[0]=r3;a.r[1]=rd32(param_2);a.r[2]=r5;(void)tc_call(0x80213504u,&a);fl_=1u;break;}fl_=1u;break;}c0lt=param_1<382;
if((u32)param_1==0x17eu){a=za;(void)tc_call(0x8010d4c0u,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<394;if((u32)param_1==0x18au){fl_=1u;break;}if(!c0lt){a=za;
a.r[0]=rd32(param_2)&0xffu;(void)tc_call(0x80224e9cu,&a);fl_=1u;break;}if(param_1>=393){r3=0u;r4=0u;ctr=0x5du;do{r5=r4-0x7fb66fa0u;r4=r4+8u;r0=rd32(r5+0x820u);
r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;
r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;
r3=r3+r0;r0=rd32(r5+0x820u);r5=r4-0x7fb66fa0u;r4=r4+8u;r3=r3+r0;r3=r3+rd32(r5+0x820u);ctr=ctr-1u;}while(ctr!=0u);if(r3>=0x7fffffffu){r3=0x7fffffffu;}a=za;
a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}fl_=1u;break;}if((u32)param_1!=0x175u){fl_=1u;break;}}else{c0lt=param_1<170;if((u32)param_1==0xaau){a=za;
r3=tc_call(0x80097da4u,&a);a=za;a.r[0]=r3;(void)tc_call(0x800978dcu,&a);a=za;r3=tc_call(0x8010d284u,&a);wr32(0x80571184u,r3);a=za;(void)tc_call(0x80075520u,&a);
a=za;(void)tc_call(0x80075998u,&a);fl_=1u;break;}if(c0lt){c0lt=param_1<145;if((u32)param_1==0x91u){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8013feccu,&a);a=za;
a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){if(param_1>=157){c0lt=param_1<161;if((u32)param_1==0xa1u){wr32(0x80499094u,0u);a=za;
r3=tc_call(0x800a7854u,&a);if(r3==0u){fl_=1u;break;}a=za;a.r[0]=r3;(void)tc_call(0x8006c878u,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<163;
if((u32)param_1==0xa3u){a=za;(void)tc_call(0x8013fa88u,&a);fl_=1u;break;}if(!c0lt){fl_=1u;break;}a=za;(void)tc_call(0x8013f95cu,&a);fl_=1u;break;}
c0lt=param_1<159;if((u32)param_1==0x9fu){r4=(u32)rd16(0x80499088u)+rd32(0x8049e14cu);if((s32)r4<=0){r4=0u;}if((s32)r4>=65535){r4=0xffffu;}if((s32)r4<=0){
r4=0x64u;}r0=r4&0xffffu;if(r0>=0xffffu){r0=0xffffu;}wr16(0x8049908au,(u16)r0);fl_=1u;break;}if(!c0lt){wr16(0x8049908cu,0x2710u);fl_=1u;break;}a=za;
a.r[0]=(ppc_cntlzw(rd32(param_2+4u)-rd32(param_2))>>5u)&0x7ffffffu;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}c0lt=param_1<150;if((u32)param_1==0x96u){a=za;
r3=tc_call(0x800a7488u,&a);a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<154;if((u32)param_1==0x9au){r0=rd32(param_2+4u);
r29=rd32(param_2+8u);if(r0!=6u){if(r0==5u){r29=r29-((r29<<1u)&0xfffffffeu);}a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8014d9a4u,&a);r29=r29+r3;}
if(rd32(param_2)==0xe002u){a=za;a.r[0]=0xe002u;r3=tc_call(0x8014d9a4u,&a);if(r29!=r3){a=za;a.r[0]=7u;(void)tc_call(0x8014da48u,&a);}}a=za;a.r[0]=rd32(param_2);
a.r[1]=r29;(void)tc_call(0x8014d9dcu,&a);fl_=1u;break;}if(!c0lt){fl_=1u;break;}if(param_1>=153){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8014d9a4u,&a);a=za;
a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}fl_=1u;break;}c0lt=param_1<147;if((u32)param_1==0x93u){a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x60u);
a=za;a.r[0]=r3;a.r[1]=rd32(param_2);a.r[2]=rd32(param_2+4u);a.r[3]=rd32(param_2+8u);(void)tc_call(0x802150a8u,&a);fl_=1u;break;}if(c0lt){a=za;
a.r[0]=rd32(param_2);r3=tc_call(0x8013ff20u,&a);a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}}else{c0lt=param_1<80;if((u32)param_1==0x50u){a=za;
a.r[0]=rd32(param_2);(void)tc_call(0x8014d92cu,&a);fl_=1u;break;}if(c0lt){c0lt=param_1<76;if((u32)param_1==0x4cu){fl_=1u;break;}if(!c0lt){c0lt=param_1<78;
if((u32)param_1==0x4eu){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8014d8ecu,&a);r29=r3;a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=r29;
(void)tc_call(0x800a3220u,&a);fl_=1u;break;}if(!c0lt){a=za;a.r[0]=rd32(param_2);(void)tc_call(0x8014d968u,&a);fl_=1u;break;}a=za;a.r[0]=rd32(param_2);
r3=tc_call(0x8014d8acu,&a);r29=r3;a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=r29;(void)tc_call(0x800a3220u,&a);fl_=1u;break;}
c0lt=param_1<8;if((u32)param_1==8u){a=za;r3=tc_call(0x80040b64u,&a);r3=r3&0xffffu;a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(c0lt){fl_=1u;
break;}if(param_1>=75)break;fl_=1u;break;}c0lt=param_1<125;if((u32)param_1==0x7du){a=za;a.r[0]=rd32(((rd32(param_2)<<3u)&0xfffffff8u)-0x7fb66780u);
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){if(param_1>=144){a=za;a.r[0]=rd32(param_2);r3=tc_call(0x8013ffc8u,&a);a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(param_1>=127){fl_=1u;break;}a=za;a.r[0]=(u32)rd8(((rd32(param_2)<<3u)&0xfffffff8u)-0x7fb6677cu);
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(param_1>=91){fl_=1u;break;}if(param_1<87){fl_=1u;break;}}c0lt=param_1<90;r29=0u;if((u32)param_1==0x5au){a=za;
a.f[0]=f1;a.r[0]=0x817fdf70u;a.r[1]=0x805707d8u;a.r[2]=rd32(param_2);f1=tc_callf(0x8010ca88u,&a);a=za;a.f[0]=f1;a.r[0]=0x817fdf80u;a.r[1]=rd32(param_2+4u);
a.r[2]=0x40u;(void)tc_call(0x80079e9cu,&a);r29=0x817fdf80u;}else{do{if(!c0lt){c0lt=param_1<149;if((u32)param_1!=0x95u){if(!c0lt){fl_=2u;break;}
if(param_1>=148)break;fl_=2u;break;}}else{c0lt=param_1<88;if((u32)param_1!=0x58u){if(!c0lt){a=za;a.f[0]=f1;a.r[0]=0x817fdf70u;a.r[1]=0x805707c6u;
a.r[2]=rd32(param_2);(void)tc_call(0x8010ca88u,&a);a=za;a.r[0]=rd32(param_2+4u);r3=tc_call(0x800a41b0u,&a);r29=r3;fl_=2u;break;}if(param_1>=87)break;fl_=2u;
break;}}a=za;a.f[0]=f1;a.r[0]=0x817fdf70u;a.r[1]=0x805707d0u;a.r[2]=rd32(param_2);(void)tc_call(0x8010ca88u,&a);a=za;a.r[0]=rd32(param_2+4u);
r3=tc_call(0x800a4140u,&a);r29=r3;fl_=2u;break;}while(0);if(fl_==2u){fl_=0u;}else{a=za;a.f[0]=f1;a.r[0]=0x817fdf70u;a.r[1]=0x805707beu;a.r[2]=rd32(param_2);
(void)tc_call(0x8010ca88u,&a);a=za;a.r[0]=rd32(param_2+4u);r3=tc_call(0x800a4050u,&a);r29=r3;}}if(r29==0u){fl_=1u;break;}a=za;r3=tc_call(0x80097da4u,&a);
r3=rd32(r3+0x50u);a=za;a.r[0]=r3;a.r[1]=0x817fdf70u;a.r[2]=r29;(void)tc_call(0x800cdf5cu,&a);fl_=1u;break;}c0lt=param_1<237;if((u32)param_1==0xedu){a=za;
a.r[0]=param_2;(void)tc_call(0x8010d17cu,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<249;if((u32)param_1==0xf9u){f3=rdf64(0x80574118u);f1=(f64)rdf32(0x80574104u);
wr32(0x817fdfccu,rd32(param_2)^0x80000000u);f1=(f64)(f32)(f1*(f64)(f32)(rdf64(0x817fdfc8u)-f3));f1=(f64)(f32)px_fdiv(f1,(f64)rdf32(0x80574108u));a=za;a.f[0]=f1;
f1=tc_callf(0x80262704u,&a);f1=(f64)(f32)f1;f0=(f64)(f32)((f64)rdf32(0x8057410cu)*f1);f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd0u,f0);a=za;
a.r[0]=rd32(0x817fdfd4u);(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<275;if((u32)param_1==0x113u){a=za;a.r[0]=rd32(param_2);
a.r[1]=rd32(param_2+4u);(void)tc_call(0x8010ced0u,&a);fl_=1u;break;}if(!c0lt){c0lt=param_1<281;if((u32)param_1==0x119u){r4=rd32(0x8057114cu);
if(((((6u-r4)|(r4-6u))>>0x1fu)&1u)==0u){a=za;r3=tc_call(0x800a7488u,&a);if(r3==4u){a=za;(void)tc_call(0x80076a48u,&a);fl_=1u;break;}fl_=1u;break;}fl_=1u;break;}
if(!c0lt){r4=rd32(0x8057114cu);if(((((6u-r4)|(r4-6u))>>0x1fu)&1u)==0u){a=za;r3=tc_call(0x800a7488u,&a);if(r3==7u){a=za;a.r[0]=2u;(void)tc_call(0x80076a48u,&a);
fl_=1u;break;}fl_=1u;break;}fl_=1u;break;}fl_=1u;break;}c0lt=param_1<251;if((u32)param_1==0xfbu){a=za;a.f[0]=f1;a.r[0]=rd32(param_2);
(void)tc_call(0x8010d234u,&a);fl_=1u;break;}if(!c0lt){fl_=1u;break;}}else{c0lt=param_1<245;if((u32)param_1==0xf5u){a=za;a.r[0]=4u;r3=tc_call(0x80118c38u,&a);
a=za;a.r[0]=r3;a.r[1]=rd32(param_2)-0xau;a.r[2]=0x817fdf39u;(void)tc_call(0x8011922cu,&a);a=za;a.r[0]=(u32)(s8)rd8(0x817fdf39u);(void)tc_call(0x800a796cu,&a);
fl_=1u;break;}if(!c0lt){c0lt=param_1<247;if((u32)param_1==0xf7u){a=za;a.r[0]=rd32(param_2);(void)tc_call(0x8010d070u,&a);fl_=1u;break;}if(!c0lt){
f3=rdf64(0x80574118u);f1=(f64)rdf32(0x80574104u);wr32(0x817fdfc4u,rd32(param_2)^0x80000000u);f1=(f64)(f32)(f1*(f64)(f32)(rdf64(0x817fdfc0u)-f3));
f1=(f64)(f32)px_fdiv(f1,(f64)rdf32(0x80574108u));a=za;a.f[0]=f1;f1=tc_callf(0x80262b10u,&a);f1=(f64)(f32)f1;f0=(f64)(f32)((f64)rdf32(0x8057410cu)*f1);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfd0u,f0);a=za;a.r[0]=rd32(0x817fdfd4u);(void)tc_call(0x800a796cu,&a);fl_=1u;break;}a=za;a.r[0]=4u;
r3=tc_call(0x80118c38u,&a);a=za;a.r[0]=r3;a.r[1]=rd32(param_2)-0xau;a.r[3]=0x817fdf38u;(void)tc_call(0x8011922cu,&a);a=za;a.r[0]=(u32)(s8)rd8(0x817fdf38u);
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if((u32)param_1!=0xf3u){fl_=1u;break;}}}else{c0lt=param_1<205;if((u32)param_1==0xcdu){r5=0x7fffu;r3=0u;r6=0u;r4=0u;
ctr=(u32)param_3;if(param_3>0){do{r0=rd32(param_2+r4);if((s32)r5>(s32)r0){r3=r6;r5=r0;}r6=r6+1u;r4=r4+4u;ctr=ctr-1u;}while(ctr!=0u);}a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(c0lt){if(param_1>=198){c0lt=param_1<203;if((u32)param_1==0xcbu){r3=0x7fffu;r4=0u;ctr=(u32)param_3;if(param_3>0){
do{r0=rd32(param_2+r4);if((s32)r3>=(s32)r0){r3=r0;}r4=r4+4u;ctr=ctr-1u;}while(ctr!=0u);}if((u32)param_3==0u){r3=0u;}a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){r5=0u;r3=0u;r6=0u;r4=0u;ctr=(u32)param_3;if(param_3>0){do{r0=rd32(param_2+r4);if((s32)r5<(s32)r0){r3=r6;
r5=r0;}r6=r6+1u;r4=r4+4u;ctr=ctr-1u;}while(ctr!=0u);}a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(param_1>=202){r3=0u;r4=0u;ctr=(u32)param_3;
if(param_3>0){do{r0=rd32(param_2+r4);if((s32)r3<=(s32)r0){r3=r0;}r4=r4+4u;ctr=ctr-1u;}while(ctr!=0u);}a=za;a.r[0]=r3;(void)tc_call(0x800a796cu,&a);fl_=1u;break;
}fl_=1u;break;}c0lt=param_1<195;if((u32)param_1==0xc3u){a=za;r3=tc_call(0x80097da4u,&a);r3=rd32(r3+0x60u);a=za;a.r[0]=r3;a.r[1]=rd32(param_2);
r3=tc_call(0x80215128u,&a);a=za;a.r[0]=r3;a.r[1]=rd32(param_2+4u);(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(!c0lt){a=za;a.r[0]=rd32(param_2);
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(param_1>=194){a=za;(void)tc_call(0x80097da4u,&a);a=za;r3=tc_call(0x8010ec78u,&a);a=za;a.r[0]=r3;
a.r[1]=rd32(param_2);a.r[2]=rd32(param_2+4u);(void)tc_call(0x8010ecb8u,&a);r3=0u;return r3;}fl_=1u;break;}c0lt=param_1<225;if((u32)param_1==0xe1u){
r4=rd32(param_2);r0=0u;if((s32)r4>=462&&(s32)r4<=503){r0=1u;}if(r0==0u){r3=0u;}else{r3=(ppc_cntlzw((u32)rd8(r4-0x7fb6709au)-1u)>>5u)&0x7ffffffu;}a=za;a.r[0]=r3;
(void)tc_call(0x800a796cu,&a);fl_=1u;break;}if(c0lt){c0lt=param_1<207;if((u32)param_1==0xcfu){a=za;r3=tc_call(0x801567a0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;
a.r[1]=tc_lastr4();a.f[0]=f1;(void)tc_call(rd32(rd32(r3)+0x14u),&a);a=za;(void)tc_call(0x80081434u,&a);fl_=1u;break;}if(c0lt){fl_=1u;break;}if(param_1>=224){
r4=rd32(param_2);r0=0u;if((s32)r4>=462&&(s32)r4<=503){r0=1u;}if(r0==0u){fl_=1u;break;}r4=r4-0x1ceu;wr8(r4-0x7fb66eccu,1u);fl_=1u;break;}fl_=1u;break;}
if((u32)param_1!=0xe7u){fl_=1u;break;}}}a=za;a.r[0]=(u32)param_1;a.r[1]=param_2;(void)tc_call(0x8010cb80u,&a);fl_=1u;break;}while(0);if(fl_==1u){fl_=0u;}else{
a=za;a.r[0]=(u32)param_1;a.r[1]=param_2;(void)tc_call(0x8010d338u,&a);}}}a=za;(void)tc_call(0x80097da4u,&a);a=za;r3=tc_call(0x8010ec78u,&a);a=za;a.r[0]=r3;
(void)tc_call(0x8010ecacu,&a);r3=0u;}else{r3=1u;}return r3;}
