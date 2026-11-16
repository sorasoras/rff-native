Add-Type -AssemblyName System.Windows.Forms,System.Drawing
Add-Type @"
using System;using System.Runtime.InteropServices;using System.Text;
public class W{
 [DllImport("user32.dll")]public static extern IntPtr FindWindow(string c,string t);
 [DllImport("user32.dll")]public static extern bool SetForegroundWindow(IntPtr h);
 [DllImport("user32.dll")]public static extern bool GetWindowRect(IntPtr h,out R r);
 [DllImport("user32.dll")]public static extern bool ShowWindow(IntPtr h,int n);
 [StructLayout(LayoutKind.Sequential)]public struct R{public int L,T,Rr,B;}
}
"@
$h=[W]::FindWindow("RFF",$null)
if($h -eq [IntPtr]::Zero){Write-Output "NO WINDOW";exit}
[W]::ShowWindow($h,9)|Out-Null
[W]::SetForegroundWindow($h)|Out-Null
Start-Sleep -Milliseconds 600
$r=New-Object W+R
[W]::GetWindowRect($h,[ref]$r)|Out-Null
$w=$r.Rr-$r.L; $ht=$r.B-$r.T
$bmp=New-Object System.Drawing.Bitmap $w,$ht
$g=[System.Drawing.Graphics]::FromImage($bmp)
$g.CopyFromScreen($r.L,$r.T,0,0,(New-Object System.Drawing.Size($w,$ht)))
$bmp.Save("E:\Games\wii-decomp\rff-native\shot.png")
$g.Dispose();$bmp.Dispose()
Write-Output "window ${w}x${ht} saved"
