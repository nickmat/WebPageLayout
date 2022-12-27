@echo off

echo Run WebPageLayout

xcopy /Q /S /I /Y ..\website ..\web-new

..\build\msvc\debug\wpl --version

..\build\msvc\debug\wpl --source ../website --blog ../webblog --target ../web-new --layout layout.json

pause
