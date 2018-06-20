## config sshd

ssh_dir="~/.ssh"

echo "Port 1027" >> /etc/ssh/sshd_config1

echo "RSAAuthentication yes" >> /etc/ssh/sshd_config1

echo "PubkeyAuthentication yes" >> /etc/ssh/sshd_config1

echo "AuthorizedKeysFile %h/.ssh/authorized_keys" >> /etc/ssh/sshd_config1

echo "PermitEmptyPasswords no" >> /etc/ssh/sshd_config1

echo "UseDNS no" >> /etc/ssh/sshd_config1

echo "PasswordAuthentication no" >> /etc/ssh/sshd_config1

if [[ ! -d $ssh_dir ]]; then  
	echo "haha"
    mkdir $ssh_dir
fi  

echo "ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQDII+f29NoG/Ty5uovjcu9t6tLrI4gg+boG++J9aKV2sGNJ6J4SQ2nJD+9b3ie04CiF3gAxe2Vsw+OG3Y9EoEylFgZKhkK9Yqs7ACxn0vuPjcQszwfxlrQzvNd/Ocej2fjT6PI+19lwYDYQ+Chtpc/yEltUJRAbz8/l8H8u3NlZ5/8f3M4NInCVnsXsGeae+9yRvqLTEelRxZ9Wqhqpl1z/t87faZlp9cnOdYSups5l0ru/o2RuqWK/27h3F7leFJuE+Iikm5RTl9bNqWAOWVP+jJclBS+SaZ18q8MDewZSXsirc1dZck4VWEj4fAlCIcwfGdRGnYyX/kepSeq4CrlR" >> ~/.ssh/authorized_ggg

# service restart sshd
