Defaults  passwd_tries=3
＞　sudoコマンドのパスワード入力を最大三回まで許可する設定

Defaults  badpass_message="Mensaje de error personalizado"
＞　ユーザーが間違ったパスワードを入力した際に表示されるカスタムエラーメッセージ

Defaults  logfile="/var/log/sudo/sudo_config"
＞　すべてのsudoコマンドのログをこのファイルに記録するように指定

Defaults  log_input, log_output
＞　*sudo実行時の標準入出力を記録する設定*

Defaults  iolog_dir="/var/log/sudo"
＞　log_inputやlog_outputで記録するI/Oログの保存先ディレクトリ

Defaults  requiretty
＞　sudo コマンド実行にTTY（端末）を必須とする設定、sudoをcronやスクリプトから行えないようにする。

Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
＞　sudo　実行時に使われる環境変数pathを固定する設定。設定されたファイル内のコマンドのみ実行できるようにする。


TTYとは　＞　Teletypewriter（テレタイプ端末）の略で、現代のLinuxやUnix系システムではユーザーの操作するターミナルを意味する。
環境変数とは　＞　シェルやスクリプトの動作に影響を与える一時的な設定情報。システム全体、またはログイン中のユーザーが利用する情報を保持した変数。
cronとは　＞　LinuxやUNIX系システムで定期的にジョブ（タスク）を実行するための仕組み（デーモン）。
決まった時間に決まったコマンドやスクリプトを実行してくれる。
crontab　＞　cronジョブの設定ファイル（または編集コマンド）
/etc/crontab　＞　システム全体用の設定
/var/spool/cron/ ＞　各ユーザーのcrontabファイルの保存先
cron デーモン　＞　常時バックグラウンドで動作して、指定時刻になるとジョブを実行。
