@echo off
rem ----------------------------------------------------
rem 
rem (DD)�t�@�C�����l�[��(������u��)�o�b�`
rem 
rem 
rem 
rem ----------------------------------------------------
rem �|�C���g1
rem �u���O��̕�����ɕ����񃊃e�������w�肷��ꍇ�A
rem �uset target=%target:�u���O������=�u���㕶����%�v
rem �ϐ��W�J��̎w����set�R�}���h�ɓn���K�v������̂ŁA
rem �ucall set target=%%target:%OLD%=%NEW%%%�v
rem ----------------------------------------------------
rem �|�C���g2
rem �ϐ�����u"�v���O���ꍇ�A�u%HOGE:"=%�v
rem ----------------------------------------------------

set OLD=MyFile
set NEW=����

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
  set FILENAME=%~nx1
  call set AFTER=%%FILENAME:%OLD%=%NEW%%%
  echo %AFTER%
  ren "%BEFORE%" "%AFTER%"

  exit /b
