#usr/bin/bash

make re
echo ------------ test for ascii --------------
for VAL in `seq 30 +1 130`
do
echo ------------ test arg = $VAL --------------
./convert $VAL
done
echo ------------ test for num --------------
./convert 0
./convert +0
./convert -0
./convert 42.0f
./convert +42.0f
./convert -42.0f
./convert 42.01f
./convert +42.01f
./convert -42.01f
./convert 0.00001
./convert +0.00001
./convert -0.00001
echo ------------ test for inf --------------
./convert inf
./convert +Inf
./convert -iNf
./convert inFf
./convert +infF
./convert -inff
echo ------------ test for error --------------
./convert invalid
./convert 1e+500
./convert +1e+500
./convert -1e+500
./convert 1e-500
./convert +1e-500
./convert -1e-500
echo ------------ test for nan --------------
./convert nan
./convert +nan
./convert -nan
echo ------------ test for args --------------
./convert
./convert invalid invalid
echo ------------ test end --------------
make fclean
