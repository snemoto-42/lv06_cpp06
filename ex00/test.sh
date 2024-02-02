make re
echo ------------test for ascii--------------
for VAL in `seq 0 +1 127`
do
echo ------------test arg = $VAL--------------
./convert $VAL
done
make fclean
