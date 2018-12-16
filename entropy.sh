rm results.txt
touch results.txt
for i in `seq 10000` ; do ./entropy >>results.txt; done

