@echo off

echo Run WebPageLayout

xcopy /Q /S /I /Y ..\webmod ..\web-new

..\build\msvc\debug\wpl --version

..\build\msvc\debug\wpl --source ../webmod --blog ../webblog --target ../web-new --layout layout.json

pause
