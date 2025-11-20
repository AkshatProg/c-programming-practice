@echo off
cd C:\Users\Akshat\Desktop\C_Programming\C_Practice
git add .
set /p msg="Enter commit message: "
git commit -m "%msg%"
git push
echo.
echo Done! Press any key to exit...
pause >nul