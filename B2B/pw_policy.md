/etc/login.defs内の設定変更
PASS_MAX_DAYS 30	＞　パスワードが有効な最大日数
PASS_MIN_DAYS 2		＞　パスワードが変更できるまでの最小日数　
PASS_WARN_DAYS 7	＞　パスワードの期限切れを警告し始める日数

libpam-pwqualityとはLinuxなどのUNIXシステムで使われるPAM（pluggable Authentication Module）のモジュールのひとつで、パスワードの強度のチェックや制限を行うためのライブラリ。インストールすることで以下の設定を行える。

/etc/pam.d/common-password内の設定変更
minlen=10			＞　パスワードの最低文字数
ucredit=-1			＞　パスワードに含むべき大文字の最小字数
dcredit=-1			＞　パスワードに含むべき数字の最小字数
lcredit=-1			＞　パスワードに含むべき小文字の最小字数
maxrepeat=3			＞　同じ文字を三回以上連続で使用することはできない
reject_username		＞　パスワードにユーザー名を含めることはできない
difok=7				＞　以前のパスワードと比べて少なくとも７文字は違っている必要がある
enforce_for_root	＞　このパスワードポリシーをrootユーザーにも含める必要がある
