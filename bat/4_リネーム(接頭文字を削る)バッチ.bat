@echo off
rem ----------------------------------------------------
rem 
rem ----------------------------------------------------

:LOOP
  if "%~1" == "" goto END
  call :CHIKAN %1
  shift
  goto LOOP

:END
  pause
  exit

:CHIKAN
  echo %1
  set BEFORE=%~1
  set FILENAME=%~n1
  rem �ړ���1�������������c��̕�����
  set FILENAME=%FILENAME:~1%
  set EXTENSION=%~x1

  call set AFTER=%FILENAME%_(%YYMMDD%_%MMDD%)%EXTENSION%
  echo %AFTER%
  ren "%BEFORE%" "%AFTER%"

  exit /b

BAT�t�@�C���ŕ�����̐؂�o��
����	�Ӗ�
%V%	�ϐ�V�̒l�S��
%V:~m%	m�����ڂ���A�Ō�܂�
%V:~m,n%	m�����ڂ���An������
%V:~m,-n%	m�����ڂ���A�Ō��n������������������
%V:~-m%	��납��m�����ڂ���A�Ō�܂�
%V:~-m,n%	��납��m�����ڂ���An������
%V:~-m,-n%	��납��m�����ڂ���A�Ō��n������������������
%V:c1=c2%	����c1�𕶎�c2�ɒu������B���ꂼ�ꕡ���̕������w�肷�邱�Ƃ��\

C:\>SET STR=abcdefg
C:\>ECHO %STR%
abcdefg

C:\>ECHO %STR:~2%
cdefg

C:\>ECHO %STR:~2,3%
cde

C:\>ECHO %STR:~2,-3%
cd

C:\>ECHO %STR:~-3%
efg

C:\>ECHO %STR:~-3,2%
ef

C:\>ECHO %STR:~-3,-2%
e

C:\>ECHO %STR:~-3,-1%
ef

