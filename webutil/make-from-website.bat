@echo off

echo Run WebPageLayout

xcopy /Q /S /I /Y ..\website ..\web-new

wpl --version

wpl --source ../website --target ../web-new --layout layout.json

pause
