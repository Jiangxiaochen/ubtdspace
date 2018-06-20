apt install libcurl3 libicu55 libkrb5-3 liblttng-ust0 libssl1.0.0 zlib1g libunwind8 libuuid1
wget https://github.com/JustArchi/ArchiSteamFarm/releases/download/3.1.3.4/ASF-linux-x64.zip
unzip ASF-linux-x64.zip -d ASF/ 
cd ASF/ 
chmod +x ArchiSteamFarm

echo '{' >> config/jxcrobot.json
echo '  "SteamLogin": "steamname",' >> config/jxcrobot.json
echo '  "SteamPassword": "password",' >> config/jxcrobot.json
echo '  "Enabled": true' >> config/jxcrobot.json
echo '}' >> config/jxcrobot.json

./ArchiSteamFarm &>../asf.log &
