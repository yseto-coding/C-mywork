署名を確認する方法　＞　shasum ~.vdiを実行しsignature.txtと中身が一致するかを確認する。
CUIであることを確認する方法　＞ echo $DISPLAYを実行しGUIが起動されないことを確認する。
UFWが機能していることを確認する方法　＞　sudo systemctl status ufw
LVMが機能していることを確認する方法　＞ sudo lvdisplay
SSHが機能していることを確認する方法　＞ sudo systemctl status ssh
使用しているOSを確認する方法　＞cat /etc/os-release
ユーザーが属しているグループを確認する方法　＞ sudo groups <username>
ユーザーを作成する方法　＞ sudo adduser <username>
グループを作成する方法　＞ sudo addgroup <groupname>
ユーザーをグループに追加する方法　＞ sudo adduser <username> <groupname>
パスワードポリシーを確認する方法　＞vim /etc/pam.d/common-password
ホストネームを確認する方法　＞hostname
ホストネームを変更する方法　＞sudo hostnamectl set-hostname <newhostname>
仮想マシンのパーティションを確認する方法　＞lsblk
--------------sudo--------------
sudoがインストールされているか確認する方法　＞ which sudo
新しいユーザーをsudoに追加する方法　＞sudo adduser <username> sudo
sudoのルールの実装の確認をする方法　＞vim /etc/sudoers.d/sudo_config
sudo policyの確認をする方法　＞　vim /etc/sudoers.d/sudo_config vim/etc/pam.d/common-password
vim /etc/login.defs
--------------UFW---------------
UFWがインストールされているか確認する方法　＞ sudo syatemctl status ufw
UFWが動作しているか確認する方法　＞ sudo ufw status
UFWのアクティブなルールをリストアップし、ポート4242に対するルールが存在することを確認する方法　＞ sudo ufw status verbose　
ポート8080を開放する新しいルールを追加する方法　＞sudo ufw allow 8080
この新しいルールを削除する方法　＞ sudo ufw delete allow 8080
--------------SSH---------------
SSHサービスがインストールされているか確認する方法　＞ sudo systemctl status ssh
SSHが正常に動作されているか確認する方法　＞ sudo systemctl status ssh
SSHがポート4242のみを使用していることを確認する方法　＞ sudo systemctl status ssh
新規ユーザーでSSHログインする方法　＞ ssh <username>@localhost -p 4242
rootユーザーでのSSHログインが制限されていることを確認する方法 >  ssh root@localhost -p 4242
-------------script-------------
スクリプトの内容を確認する方法　＞ vim monitoring.sh
サーバー起動後スクリプトが10分ごとに実行されるように設定する方法　＞ sudo crontab -eでファイルを編集する。
スクリプトが一分ごとに実行するようにする方法　＞ crontabファイルの内容を10から1に変更する。
cronを止める方法　> sudo systemctl disable cron

------------description--------
仮想マシンとは？　＞　virtual_machine.md
debianとrockyの違いとは？　＞ debianはオープンソースのdebian系と呼ばれるOS、CentOSと呼ばれるOSの後継のOS。
aptとaptitudeの違いとは？　＞　どちらも共にDebian系Linuxで使われるパッケージ管理ツールである。aptitudeは依存関係の解決などに強く画面ベースの操作も可能。aptはより標準的でシンプルな操作が可能。
APPArmorとは？　＞　
SSHとは？　＞　SSH.md
UFW（FW）とは？　＞ UFW.md
sudoとは？　＞ sudo.md
cronとは？　＞ スクリプトをバックグラウンドで設定した時間毎に定期的に実行する仕組み。
パスワードポリシーを設定するメリットとデメリットとは？　＞　パスワードを複雑にすることで不正なアクセスを防止することができる一方で、ユーザーの負担が大きくなったり、管理やサポートコストが大きくなる。
