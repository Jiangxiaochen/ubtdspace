## 关闭图形界面
```systemctl disable lightdm.service```
## 开启图形界面
```ln -s /lib/systemd/system/lightdm.service /etc/systemd/system/display-manager.service```
需要重启：
```reboot```

