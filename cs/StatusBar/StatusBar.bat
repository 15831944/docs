@echo off
rem set CSC="C:\Windows\Microsoft.NET\Framework\v4.0.30319\csc.exe"
rem set CSC="C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\MSBuild\15.0\Bin\Roslyn\csc.exe"
set CSC="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\Roslyn\csc.exe"
echo %~dpnx0
del %~dpn0.exe

rem Console�p
%CSC% %~dpn0.cs

rem Form�p
rem %CSC% /t:winexe %~dpn0.cs

%~dpn0.exe
pause
exit

rem �E�Q�Ɛݒ肵�����Ƃ�
rem  1.�G�C���A�X��
rem set REF1=/reference:System.Windows.Forms.DataVisualization.dll
rem  2.�t���p�X��
rem set REF2=/r:"C:\Windows\Microsoft.NET\Framework64\v4.0.30319\System.Windows.Forms.DataVisualization.dll"
rem  �R���p�C���I�v�V����
rem %CSC% %REF1% %REF2% %~dpn0.cs