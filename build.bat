
if exist "out" (
    rmdir /S /Q out
)
mkdir out

cmake -S %cd% -B out -G Ninja
ninja -C out