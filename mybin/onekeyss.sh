wget --no-check-certificate -O /opt/shadowsocks-go.sh https://raw.githubusercontent.com/teddysun/shadowsocks_install/master/shadowsocks-go.sh;

wget --no-check-certificate -O /opt/100mb.test http://cachefly.cachefly.net/100mb.test;

wget --no-check-certificate -O /opt/shadowsocks-crond.sh https://raw.githubusercontent.com/teddysun/shadowsocks_install/master/shadowsocks-crond.sh;

wget --no-check-certificate -O /opt/superbench.sh https://raw.githubusercontent.com/oooldking/script/master/superbench.sh

chmod +x /opt/superbench.sh
chmod +x /opt/shadowsocks-go.sh;
chmod 755 /opt/shadowsocks-crond.sh;

(crontab -l ; echo "*/5 * * * * /opt/shadowsocks-crond.sh") | crontab -;
/opt/shadowsocks-go.sh 2>&1 | tee /opt/shadowsocks-go.log;
