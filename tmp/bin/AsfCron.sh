pid=`pidof ArchiSteamFarm`
log_dir=$HOME/log && test -d $log_dir || mkdir -p $log_dir
asf_dir=$HOME/asf

if [ -z $pid ]
then
	echo "`date +"%Y-%m-%d %H:%M:%S"`: ArchiSteamFarm is not running" >> $log_dir/asf_cron.log
	{ $asf_dir/ArchiSteamFarm & } 2>&1 >> $log_dir/asf_program.log
else
	echo "`date +"%Y-%m-%d %H:%M:%S"`: ArchiSteamFarm is running with pid: $pid" >> $log_dir/asf_cron.log
fi


