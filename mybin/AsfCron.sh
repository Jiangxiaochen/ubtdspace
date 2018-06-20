#pid=$(pidof ArchiSteamFarm)
#echo pid=$pid

pid=`pidof ArchiSteamFarm`

if [ -z $pid ]
then
	echo "`date +"%Y-%m-%d %H:%M:%S"`: ArchiSteamFarm is not running" >> /root/study/asf_status.log
	#/root/study/ASF/ArchiSteamFarm &>>/root/study/asf.log &
	{
		/root/study/ASF/ArchiSteamFarm &
	} 	2>&1 >> /root/study/asf.log
else
	echo "`date +"%Y-%m-%d %H:%M:%S"`: ArchiSteamFarm is running with pid: $pid" >> /root/study/asf_status.log
fi


