@echo off
rem This is used when modifying mapnik code on Windows
rem 
rem Example usage on Ben's PC:
rem set SRC=C:\dev\tools\mapnik-windows-builds\packages\mapnik-v3.0.15\mapnik-gyp

if '%SRC%'=='' goto NeedSRC

robocopy /mir %SRC%\mapnik-sdk\include include
robocopy /mir %SRC%\mapnik-sdk\lib lib
robocopy /mir %SRC%\mapnik-sdk\share share

goto :eof
:NeedSRC
echo You must set the SRC variable to the root of the 'mapnik/mapnik-gyp' package inside mapbox/windows-builds/packages repo
echo For example, SET SRC=C:\dev\tools\mapnik-windows-builds\packages\mapnik-v3.0.15\mapnik-gyp

