@echo off
rem ----------------------------------------------------
rem
rem (DD)�t�@�C�����l�[��(�A�Ԓu��)�o�b�`
rem ���O�o�͕t��
rem hoge.txt, aaa.txt �� MyFile000.txt, MyFile001.txt
rem
rem ----------------------------------------------------

setlocal enabledelayedexpansion
rem prefix = �ړ�����
rem pad = �L������
rem num = �����l
set prefix=MyFile
set pad=3
set num=1

  echo �J�n>log.txt

:LOOP
  if "%~1" == "" goto END
  set padnum=00000000!num!
  call :CHIKAN %1 %padnum%
  set /a num+=1
  shift
  goto LOOP

  endlocal


:END
  echo �I��>>log.txt
  log.txt
  pause
  exit


:CHIKAN
  echo %1
  set BEFORE=%~1
  set PADN=%~2
  set EXT=%~x1
  set FILENAME=%~nx1
  echo ["%BEFORE%"]	[!prefix!!PADN:~-%pad%!!EXT!]>>log.txt
  ren "%BEFORE%" !prefix!!PADN:~-%pad%!!EXT!

  exit /b
