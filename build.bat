@echo off
setlocal
cd /d E:\Games\wii-decomp\rff-native
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
set VK=C:\VulkanSDK\1.4.321.1

REM the shaders
"%VK%\Bin\glslangValidator.exe" -S vert -V rt\vs.vert -o rt\vs.spv >nul 2>&1
if errorlevel 1 echo SHADER FAIL vs & exit /b 1
"%VK%\Bin\glslangValidator.exe" -S frag -V rt\fs.frag -o rt\fs.spv >nul 2>&1
if errorlevel 1 echo SHADER FAIL fs & exit /b 1
echo shaders OK

if exist build rmdir /s /q build
mkdir build\obj 2>nul
cl /nologo /O1 /W3 /TC /bigobj /Irt /Igen /I"%VK%\Include" /c /Fo:build\obj\ rt\tc_rt.c rt\tc_ppc.c gen\dispatch.c rt\boot.c rt\render.c rt\disc_host.c
if errorlevel 1 exit /b 1
cl /nologo /O1 /W3 /TC /Irt /Igen /MP /c /Fo:build\obj\ @corpus_all.rsp
if errorlevel 1 exit /b 1
link /nologo /OUT:rff.exe /STACK:16777216 build\obj\*.obj "%VK%\Lib\vulkan-1.lib" user32.lib gdi32.lib /SUBSYSTEM:CONSOLE
if errorlevel 1 exit /b 1
echo BUILD OK
