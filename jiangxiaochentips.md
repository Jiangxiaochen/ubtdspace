## 开关图形界面
- 关闭
```systemctl disable lightdm.service```
- 开启
```ln -s /lib/systemd/system/lightdm.service /etc/systemd/system/display-manager.service```
- 重启：
```reboot```

