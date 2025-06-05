#!/bin/bash

# ARCH
arch=$(uname -a)
＞　uname -aでシステム情報を取得し、変数archにその情報を格納するコマンド。

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)
＞　grepで/proc/cpuinfoの中から"physical id"という文字列を含む行を検索し、wc -lでその出現回数を数え、変数cpufにその値を格納している。その結果、物理CPUの数を数えている。

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)
＞ grepで/proc/cpuinfoの中から"processor"という文字列を含む行を検索し、wc -lでその出現回数を数え、変数cpuvにその値を格納している。その結果論理プロセッサの数を数えている。

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
free --megaにより、システムのメモリ使用状況をメガバイト単位で表示し、その中から第一フィールドがMemで始まる行の第二フィールドをawkにより抽出しその値をram_totalに格納する。

ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
同様にして３列目（使用中メモリ）を抽出している。

ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
Memから始まる行の第２フィールドと第３フィールドを用いてメモリ使用率を計算している。

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
df -m　を用いてファイルシステムのディスク使用状況をメガバイト単位で表示して、grepを用いて"/dev/"で始まるものの中から"/boot/"が含まれるものを除外してデバイスのディスク容量の合計をGB単位で出力している

disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
同様にして、使用中のディスク容量の合計をメガバイト単位で計算して、disk_useに格納している。

disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')
同様にして、三列目（使用中ディスク容量）と二列目（総ディスク容量）を用いて最終的にディスク使用率を求めている。

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
vmstat 1 2で一秒間隔で二回、システムの統計情報を表示する。tail -1で最後の行を抽出し、awkにより抽出した行の15列目の値を表示する。その結果cpulにはCPUのアイドル時間の割合が代入される。

cpu_op=$(expr 100 - $cpul)
exprにより100からCPUのアイドル時間を差し引くことで、現在のCPU使用率を計算している。

cpu_fin=$(printf "%.1f" $cpu_op)
CPU使用率を小数点第一位までの浮動小数点数としてフォーマットし、その結果をcpu_finに格納している。

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')
who -bにより、システムが最後にブートされた日時を表示する。awkでsystemの行を探し、3列目（日付）と４列目（時刻）をスペース区切りで出力している。
そしてその値をlbに格納している

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)
lsblkによりブロックデバイス（ディスクやパーティション）情報を表示して、grepにより"lvm"を含む行を抽出している。
wc -lにより該当する行の数を数え上げ、-gt 0によりそれが0よりも大きければ、yes、そうでなければnoを出力している。
その出力結果をlvmuに格納している。

# TCP CONNEXIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)
ss -taにより、現在のtcp接続一覧を表示する。grep ESTABによりESTAB状態の接続のみを抽出し、wc -lによりその行数を
数え上げ、その値をtcpcという変数に格納している。

# USER LOG
ulog=$(users | wc -w)
usersにより現在ログインしているユーザーの一覧を表示している。wc -wにより出力内の単語数を数え上げ、その値を
ulogに格納している。

# NETWORK
ip=$(hostname -I)
hostname -IによりホストのIPアドレスを取得して、それを変数ipに格納している。

mac=$(ip link | grep "link/ether" | awk '{print $2}')
ip linkにより、ネットワークインターフェースの詳細情報を表示して、grep "link/ether"によりMACアドレスが記載
されている行のみを抽出している、awk '{print $2}'によりその行の二列目のみを抽出し、その値を変数macに格納している。

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
journalctl _COMM=sudoによりsudoで生成されたログを取得して、grep COMMANDによりログの中から
COMMANDを含む行のみを抽出して、wc -lによりその行数を数え上げ、その値をcmnd変数に格納している。

wall "	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $cmnd cmd"

wallにより変数とメッセージを出力している。
