for i in $(seq 0 15);do
  ./a.out < data$i.in > out$i
  DIFF=`diff -wB out$i data$i.ans`

  if [ $? -ne 0 ]; then
    echo "Wrong answer"$i
    exit 2
  fi
done
