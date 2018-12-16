rm results.txt
touch results.txt
for i in `seq 1000` ; do ./entropy $1 >>results.txt; done

