prog_bin=$1
running_name=$(basename $prog_bin)
echo $running_name
pid=$(/bin/pidof $running_name)
gdb attach $pid
