@echo off

echo Run WebPageLayout

xcopy /Q /S /I /Y ..\webmod ..\web-new

wpl --version

wpl --source ../webmod --target .. --layout layout.json

pause
